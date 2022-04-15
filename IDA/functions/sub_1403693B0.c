//----- (00000001403693B0) ----------------------------------------------------
__int64 __fastcall sub_1403693B0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, _DWORD* a5)
{
	__int64 v7; // rdi
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned int v13; // eax
	unsigned int v14; // edx
	unsigned int v15; // ecx

	if (!qword_140C65878)
		return 2147500037i64;
	v7 = sub_1403511C0(a1, a3);
	if (!v7)
		return 2147500037i64;
	(*(void(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
	v8 = *(_QWORD*)a1;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
	result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(v8 + 264))(a1, a2, v9);
	if ((int)result >= 0)
	{
		if (a5)
		{
			if (qword_140C65878)
				v12 = sub_140351120(v11, a2);
			else
				v12 = 0i64;
			v13 = *(_DWORD*)(v12 + 8);
			v14 = *(_DWORD*)(v7 + 8);
			v15 = *(_DWORD*)(v7 + 4);
			if (v14 < v13)
				v14 = v13;
			if (v15 < v13 >> 1)
				v15 = v13 >> 1;
			*a5 = sub_1401AE6F0(v15, v14);
		}
		return 0i64;
	}
	return result;
}
// 140369491: variable 'v11' is possibly undefined
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C77890: using guessed type __int64 qword_140C77890;

