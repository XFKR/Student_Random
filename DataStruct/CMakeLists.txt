#读取所有源文件
aux_source_directory(. DIR_LIB_DataStruct)

#生成链接库
add_library (DataStruct ${DIR_LIB_DataStruct})