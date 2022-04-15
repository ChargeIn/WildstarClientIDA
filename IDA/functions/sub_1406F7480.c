//----- (00000001406F7480) ----------------------------------------------------
__int64 __fastcall sub_1406F7480(_QWORD* a1)
{
	unsigned int v1; // ebx
	char* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v8; // [rsp+28h] [rbp-20h]

	v1 = 1;
	v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v7, v3);
	v5 = sub_1403D9200(v4, v8);
	if (v5)
		sub_140649930(a1, v5);
	else
		v1 = 0;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return v1;
}
// 1406F74AE: variable 'v4' is possibly undefined

