//----- (0000000140166360) ----------------------------------------------------
__int64 __fastcall sub_140166360(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // edi
	char* v5; // rax
	int v6; // ebp
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rcx
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	void* v12; // [rsp+28h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v11, v5);
	v6 = v3 - 1;
	v7 = (__int64)v12;
	if (v6 >= 0 && v6 < *(_DWORD*)(v2 + 1160) && v4 >= 0 && v4 < *(_DWORD*)(v2 + 1144))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v6);
		if (v4 >= *(_DWORD*)(v8 + 24))
			v9 = 0i64;
		else
			v9 = *(_QWORD**)(*(_QWORD*)(v8 + 16) + 8i64 * v4);
		sub_14015D030(v9, v12);
	}
	if (v7)
		sub_14018B900(v7, 0);
	return 0i64;
}

