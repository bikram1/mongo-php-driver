//collection.h
/**
 *  Copyright 2009 10gen, Inc.
 * 
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 * 
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

zend_object_value mongo_mongo_collection_new(zend_class_entry* TSRMLS_DC);

PHP_METHOD(MongoCollection, __construct);
PHP_METHOD(MongoCollection, __toString);
PHP_METHOD(MongoCollection, getName);
PHP_METHOD(MongoCollection, drop);
PHP_METHOD(MongoCollection, validate);
PHP_METHOD(MongoCollection, insert);
PHP_METHOD(MongoCollection, batchInsert);
PHP_METHOD(MongoCollection, update);
PHP_METHOD(MongoCollection, remove);
PHP_METHOD(MongoCollection, find);
PHP_METHOD(MongoCollection, findOne);
PHP_METHOD(MongoCollection, ensureIndex);
PHP_METHOD(MongoCollection, deleteIndex);
PHP_METHOD(MongoCollection, getIndexInfo);
PHP_METHOD(MongoCollection, count);
PHP_METHOD(MongoCollection, save);
PHP_METHOD(MongoCollection, createDBRef);
PHP_METHOD(MongoCollection, getDBRef);

