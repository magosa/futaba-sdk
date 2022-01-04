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
 * generatePathObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} path                      検索対象パス (root のパスに結合、末尾が /* のパスは前方一致検索)
 * @param  {Object} model = null              検索対象モデルID 指定オブジェクト (指定方法は下記参照、AND で評価)
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function generatePathObject(root, path, model = null, include_metadata = false) {
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
 * generateQueryObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} query                     ADT クエリ本文
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function generateQueryObject(root, query, include_metadata = false) {
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
 * generateFilterObject - description
 *
 * @param  {(String | Array<String>)} root    デジタルツインルート指定 (建物指定に相当) の配列
 * @param  {String} filter                    クエリオブジェクト
 * @param  {Boolean} include_metadata = false システムメタデータ項目のレスポンス有無 (デフォルト：false)
 * @return {Object}                           description
 */
function generateFilterObject(root, filter, include_metadata = false) {
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
 * generateSearchParameters - description
 *
 * @param  {(String | Array<String>)} values           description
 * @param  {String} condition = null description
 * @return {type}                  description
 */
function generateSearchParameters(values, condition = null) {
  let object={};
  checkArrayPrameter(object, "values", values);
  if (condition) {
    object['condition'] = condition;
  }
  return object;
}


exports.generatePathObject = generatePathObject;
exports.generateQueryObject = generateQueryObject;
exports.generateFilterObject = generateFilterObject;
exports.generateSearchParameters = generateSearchParameters;
