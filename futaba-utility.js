function checkArrayPrameter(object, item, value) {
  if (typeof value === "object") {
    object[item] = value;
  } else if (typeof value === "string") {
    object[item] = [value];
  } else {
    console.log("Parameters must be string or string array!");
  }

  return object;
}

/**
 * makePathObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} path                      検索対象パス (root のパスに結合、末尾が /* のパスは前方一致検索)
 * @param  {Object} model = nullv             検索対象モデルID 指定オブジェクト (指定方法は下記参照、AND で評価)
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function makePathObject(root, path, model = null, include_metadata = false) {
  let object = {
    "type": "path",
    "path": path
  };
  checkArrayPrameter(object, "root", root);
  if (model) {
    object['model'] = model;
  }
  if (include_metadata) {
    object['includeMetadata'] = include_metadata;
  }

  return object;
}

/**
 * makeQueryObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} query                     ADT クエリ本文
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function makeQueryObject(root, query, include_metadata = false) {
  let object = {
    "type": "query",
    "query": query
  };
  checkArrayPrameter(object, "root", root);
  if (include_metadata) {
    object['includeMetadata'] = include_metadata;
  }

  return object;
}


/**
 * makeFilterObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} filter                    クエリオブジェクト
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function makeFilterObject(root, filter, include_metadata = false) {
  let object = {
    "type": "filter",
    "filter": filter
  };
  checkArrayPrameter(object, "root", root);
  if (include_metadata) {
    object['includeMetadata'] = include_metadata;
  }

  return object;
}


/**
 * makeSearchParameters - description
 *
 * @param  {(String | Array<String>)} values           description
 * @param  {String} condition = null description
 * @return {type}                  description
 */
function makeSearchParameters(values, condition = null) {
  let object={};
  checkArrayPrameter(object, "values", values);
  if (condition) {
    object['condition'] = condition;
  }
  return object;
}


exports.makePathObject = makePathObject;
exports.makeQueryObject = makeQueryObject;
exports.makeFilterObject = makeFilterObject;
exports.makeSearchParameters = makeSearchParameters;
