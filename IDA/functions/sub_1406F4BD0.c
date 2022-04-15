//----- (00000001406F4BD0) ----------------------------------------------------
__int64 __fastcall sub_1406F4BD0(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	__int128 v4; // xmm0
	__int64 v5; // xmm1_8
	__int64 v6; // rax
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int128 v10; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v11; // [rsp+40h] [rbp-C8h]
	int v12; // [rsp+48h] [rbp-C0h]
	__int64 v13; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v14; // [rsp+58h] [rbp-B0h]
	unsigned __int16 v15[64]; // [rsp+70h] [rbp-98h] BYREF

	v2 = *(__int64**)(qword_140C65898 + 30088);
	v15[0] = 0;
	v3 = sub_1406F46D0(&v13, a1, 1);
	if (v2)
	{
		v4 = *(_OWORD*)v3;
		v5 = *((_QWORD*)v3 + 2);
		v12 = v3[6];
		v6 = *v2;
		v10 = v4;
		v11 = v5;
		(*(void(__fastcall**)(__int64*, __int128*, unsigned __int16*, __int64, _DWORD))(v6 + 248))(
			v2,
			&v10,
			v15,
			64i64,
			0);
	}
	v7 = (unsigned __int64*)sub_14018F0E0(&v13, v15)[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		sub_140058710((__int64)a1, v7, v8);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v14)
		sub_14018B900(v14, 0);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

