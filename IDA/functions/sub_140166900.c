//----- (0000000140166900) ----------------------------------------------------
__int64 __fastcall sub_140166900(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // edi
	bool v5; // r8
	int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 result; // rax

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (unsigned int)sub_140056D60(a1, 4u) != 0;
	v6 = v3 - 1;
	if (v6 < 0)
		return 0i64;
	if (v6 >= *(_DWORD*)(v2 + 1160))
		return 0i64;
	if (v4 < 0)
		return 0i64;
	if (v4 >= *(_DWORD*)(v2 + 1144))
		return 0i64;
	v7 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v6);
	if (!v7 || v4 >= *(_DWORD*)(v7 + 24))
		return 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 8i64 * v4);
	result = 0i64;
	if (v8)
		*(_BYTE*)(v8 + 8) = v5;
	return result;
}

