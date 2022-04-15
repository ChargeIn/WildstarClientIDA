//----- (00000001405AAEB0) ----------------------------------------------------
void __fastcall sub_1405AAEB0(__int64 a1)
{
	__int64* v2; // rdi
	__int64 v3; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 i; // rbx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v13; // [rsp+28h] [rbp-10h]

	v2 = *(__int64**)(qword_140C659F8 + 200);
	if (v2)
	{
		v3 = *v2;
		v13 = 0i64;
		v12 = 0i64;
		if ((*(int(__fastcall**)(__int64*, __int64*))(v3 + 136))(v2, &v12) >= 0)
		{
			v4 = v13;
			for (i = 0i64; i < v4; ++i)
			{
				v6 = *(_QWORD*)(v12 + 8 * i);
				if (v6 && *(_DWORD*)(v6 + 304))
				{
					v7 = (*(__int64(__fastcall**)(__int64*))(*v2 + 152))(v2);
					sub_1404C94C0(v8, *(_DWORD*)(a1 + 188), *(_DWORD*)(v7 + 496));
					v4 = v13;
				}
			}
		}
		v9 = qword_140C659F8;
		v13 = 0i64;
		v10 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*(_QWORD*)(v9 + 200) = 0i64;
		}
		v11 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (v11)
			sub_1405AFE10(v11);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	}
}
// 1405AAF3F: variable 'v8' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

