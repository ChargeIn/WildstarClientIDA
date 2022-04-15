#include "../winhttp.h"

//----- (00000001408261E0) ----------------------------------------------------
BOOL sub_1408261E0()
{
	BOOL result; // eax

	if (qword_140C61928)
	{
		qword_140C61930 = 0i64;
		result = FreeLibrary(qword_140C61928);
		qword_140C61928 = 0i64;
	}
	if (qword_140C61938)
	{
		qword_140C61948 = 0i64;
		qword_140C61940 = 0i64;
		result = FreeLibrary(qword_140C61938);
		qword_140C61938 = 0i64;
	}
	if (qword_140C61998)
	{
		qword_140C619A0 = 0i64;
		qword_140C619A8 = 0i64;
		qword_140C619B0 = 0i64;
		qword_140C619C8 = 0i64;
		qword_140C619D0 = 0i64;
		result = FreeLibrary(qword_140C61998);
		qword_140C61998 = 0i64;
	}
	if (qword_140C619B8)
	{
		qword_140C619C0 = 0i64;
		result = FreeLibrary(qword_140C619B8);
		qword_140C619B8 = 0i64;
	}
	if (qword_140C61950)
	{
		qword_140C61958 = 0i64;
		qword_140C61960 = 0i64;
		qword_140C61968 = 0i64;
		qword_140C61970 = 0i64;
		qword_140C61978 = 0i64;
		qword_140C61980 = 0i64;
		qword_140C61988 = 0i64;
		qword_140C61990 = 0i64;
		result = FreeLibrary(qword_140C61950);
		qword_140C61950 = 0i64;
	}
	return result;
}
// 140C61930: using guessed type __int64 qword_140C61930;
// 140C61940: using guessed type __int64 qword_140C61940;
// 140C61948: using guessed type __int64 qword_140C61948;
// 140C61958: using guessed type __int64 qword_140C61958;
// 140C61960: using guessed type __int64 qword_140C61960;
// 140C61968: using guessed type __int64 qword_140C61968;
// 140C61970: using guessed type __int64 qword_140C61970;
// 140C61978: using guessed type __int64 qword_140C61978;
// 140C61980: using guessed type __int64 qword_140C61980;
// 140C61988: using guessed type __int64 qword_140C61988;
// 140C61990: using guessed type __int64 qword_140C61990;
// 140C619A0: using guessed type __int64 qword_140C619A0;
// 140C619A8: using guessed type __int64 qword_140C619A8;
// 140C619B0: using guessed type __int64 qword_140C619B0;
// 140C619C0: using guessed type __int64 qword_140C619C0;
// 140C619C8: using guessed type __int64 qword_140C619C8;
// 140C619D0: using guessed type __int64 qword_140C619D0;

