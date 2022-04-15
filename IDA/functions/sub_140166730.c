//----- (0000000140166730) ----------------------------------------------------
__int64 __fastcall sub_140166730(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // edi
	int v4; // ebx
	char* v5; // rax
	int* v6; // rbp
	__int64 v7; // r9
	_QWORD* v8; // rcx
	__int64 v10; // [rsp+30h] [rbp-2A8h] BYREF
	int* v11; // [rsp+38h] [rbp-2A0h]
	__int64 v12; // [rsp+40h] [rbp-298h]
	char v13[640]; // [rsp+50h] [rbp-288h] BYREF

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v10, v5);
	sub_1401A72E0((__int64)v13);
	v6 = v11;
	if ((int)sub_1401A7A60((__int64)v13, v11, (v12 - (__int64)v11) >> 1) < 0)
		sub_140056570(a1, 4u, "invalid xml string");
	if (v3 >= 0 && v3 < *(_DWORD*)(v2 + 1160) && v4 >= 0 && v4 < *(_DWORD*)(v2 + 1144))
	{
		v7 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v3);
		if (v7)
		{
			if (v4 < *(_DWORD*)(v7 + 24) && (v8 = *(_QWORD**)(*(_QWORD*)(v7 + 16) + 8i64 * v4)) != 0i64)
				sub_14015CFA0(v8, (__int64)v13);
			else
				sub_14015D3A0((__int64*)v7, v4, (__int64)v13);
		}
	}
	sub_1401A76A0((__int64)v13);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}

