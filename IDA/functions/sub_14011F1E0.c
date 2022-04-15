//----- (000000014011F1E0) ----------------------------------------------------
__int64 __fastcall sub_14011F1E0(_QWORD* a1)
{
	char* v2; // rax
	unsigned int v3; // ebx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // r9
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-B8h]
	__int64 v12; // [rsp+28h] [rbp-B0h]
	__int64 v13; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v14; // [rsp+38h] [rbp-A0h] BYREF
	const __m128i* v15; // [rsp+40h] [rbp-98h]
	__int64 v16; // [rsp+58h] [rbp-80h] BYREF
	__int64 v17; // [rsp+60h] [rbp-78h]
	unsigned __int16 v18[32]; // [rsp+80h] [rbp-58h] BYREF

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v14, v2);
	if (sub_1401B5B50(*(__int64*)&qword_140C63788, v15, 1i64, 3, &v13) >= 0)
	{
		v4 = v13;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
		sub_14018FE50(v18, v6, v5, v7, v11, v12, v13, v14, (__int64)v15);
		v8 = (unsigned __int64*)sub_14018F0E0(&v16, v18)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900(v17, 0);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		v3 = 1;
	}
	else
	{
		v3 = 0;
	}
	if (v15)
		sub_14018B900((__int64)v15, 0);
	return v3;
}
// 14011F270: variable 'v6' is possibly undefined
// 14011F270: variable 'v7' is possibly undefined
// 14011F270: variable 'v11' is possibly undefined
// 14011F270: variable 'v12' is possibly undefined
// 14011F1E0: using guessed type unsigned __int16 var_58[32];

