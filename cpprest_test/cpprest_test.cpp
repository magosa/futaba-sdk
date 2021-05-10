// cpprest_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <Windows.h>
#include <iostream>
#include <fstream>
#include "Futaba.h"

json::value readJsonFile(wchar_t const* file_path)
{
    json::value json_obj;
    try
    {
        std::ifstream ifs(file_path);
        std::stringstream strs;

        strs << ifs.rdbuf();
        ifs.close();

        json_obj = json::value::parse(strs);
    }
    catch (json::json_exception e)
    {
        throw json::json_exception("Error Parsing JSON file !");
    }

    return json_obj;
}

bool wrightJsonFile(wchar_t const* file_path, json::value target_json)
{
    try
    {
        std::wofstream ofs(file_path);
        ofs << target_json.serialize().c_str() << std::endl;
        ofs.close();
    }
    catch (json::json_exception e)
    {
        throw json::json_exception("Error Write JSON file !");
        return FALSE;
    }

    return TRUE;
}

int main()
{
    // コマンドプロンプトの文字コードをUTF-8に設定する
    SetConsoleOutputCP(CP_UTF8);

    Futaba client;

    try
    {
        json::value client_conf = readJsonFile(L"./data/config.json");
        //json::value client_token = client.getAccessToken(client_conf);
        //std::wcout << client_token << std::endl;
        //if (client_token.has_field(L"access_token") && client_token.has_field(L"refresh_token"))
        //{
        //    client_conf[L"access_token"] = client_token[L"access_token"];
        //    client_conf[L"refresh_token"] = client_token[L"refresh_token"];
        //    wrightJsonFile(L"./data/config.json", client_conf);
        //}

        client.setAccessToken(client_conf);
        //client.showConfiguration();

        json::value data;
        data[L"building"] = json::value::string(L"R90/research");
        data[L"query_type"] = json::value::string(L"odata");
        data[L"query"] = json::value::string(L"$filter=endswith(titles, \'熱量\')");

        json::value res = client.getThingsWithQuery(data);

        std::wcout << res << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cout << "Error:" << e.what() << std::endl;
    }

    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
