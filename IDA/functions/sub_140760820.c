//----- (0000000140760820) ----------------------------------------------------
__int64 __fastcall sub_140760820(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64** v3; // rax
	__int64** v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // eax
	unsigned int v11; // edx
	__int64 v12; // rcx
	__int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = (__int64**)sub_140056AB0(a1, 1u);
	v4 = v3;
	if (!v3)
		return 0i64;
	if (!*v3)
		return 0i64;
	v5 = **v3;
	if (!v5)
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 96i64))(v5)
		|| (!*v4 ? (v6 = 0i64) : (v6 = **v4), (unsigned int)sub_140569F10(v6))
		|| ((v7 = *v4) == 0i64 || !*((_DWORD*)v7 + 296) ? (v8 = 0i64) : (v8 = v7[1]), !sub_14041FB40(v8)))
	{
		sub_140056570(a1, 1u, "item is not auctionable");
	}
	if (v7)
		v9 = *v7;
	else
		v9 = 0i64;
	v10 = *(_DWORD*)(v9 + 120);
	v11 = 1;
	if (v10)
		v11 = v10;
	if (v7 && *((_DWORD*)v7 + 294))
		v12 = (__int64)(v7 + 4);
	else
		v12 = 0i64;
	v14[1] = 1i64;
	v14[2] = 0i64;
	v14[0] = sub_1403E01C0(v12, v11);
	sub_140501210(a1, v14);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

