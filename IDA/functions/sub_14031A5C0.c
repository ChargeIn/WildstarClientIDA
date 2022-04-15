//----- (000000014031A5C0) ----------------------------------------------------
__int64 __fastcall sub_14031A5C0(_QWORD* a1, _QWORD* a2)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64* v8; // rsi
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	__int64 i; // rbx
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rcx
	int v16; // [rsp+20h] [rbp-58h] BYREF
	int v17; // [rsp+24h] [rbp-54h]
	__int64 v18; // [rsp+28h] [rbp-50h]
	__int64 v19; // [rsp+30h] [rbp-48h]
	__int64 v20; // [rsp+38h] [rbp-40h]
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	v3 = 0;
	if (a1[137])
	{
		result = 0i64;
		do
		{
			v6 = a1[136] + 112 * result;
			v7 = *(_QWORD*)(v6 + 80);
			v8 = (__int64*)(v6 + 80);
			if (v7)
			{
				if (*(float*)(v6 + 104) != 0.0 && !*(_QWORD*)(v7 + 360))
				{
					*(_QWORD*)(v7 + 360) = a2;
					*(_QWORD*)(v7 + 368) = *a2;
					*a2 = v7;
					v9 = *(_QWORD*)(v7 + 368);
					if (v9)
						*(_QWORD*)(v9 + 360) = v7 + 368;
				}
			}
			else if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[5] + 16i64) + 40i64))(
				*(_QWORD*)(a1[5] + 16i64),
				*(_QWORD*)(a1[52] + 3776i64),
				v6 + 80,
				0i64) >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
				v11 = *v8;
				v16 = 150;
				v18 = 1065353216i64;
				v19 = 0i64;
				v20 = 0i64;
				v17 = (int)((double)v10 * 2.328306436538696e-10 * 4294967296.0);
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v16);
			}
			result = ++v3;
		} while ((unsigned __int64)v3 < a1[137]);
	}
	for (i = a1[138]; i; i = *(_QWORD*)(i + 120))
	{
		v13 = *(_QWORD*)(i + 80);
		if (v13)
		{
			if (*(float*)(i + 104) != 0.0 && !*(_QWORD*)(v13 + 360))
			{
				*(_QWORD*)(v13 + 360) = a2;
				*(_QWORD*)(v13 + 368) = *a2;
				*a2 = v13;
				result = *(_QWORD*)(v13 + 368);
				if (result)
					*(_QWORD*)(result + 360) = v13 + 368;
			}
		}
		else
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[5] + 16i64) + 40i64))(
				*(_QWORD*)(a1[5] + 16i64),
				*(_QWORD*)(a1[52] + 3776i64),
				i + 80,
				0i64);
			if ((int)result >= 0)
			{
				v14 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
				v15 = *(_QWORD*)(i + 80);
				v16 = 150;
				v18 = 1065353216i64;
				v19 = 0i64;
				v20 = 0i64;
				v17 = (int)((double)v14 * 2.328306436538696e-10 * 4294967296.0);
				result = (*(__int64(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v15 + 584i64))(v15, 0i64, &v16);
			}
		}
	}
	return result;
}
// 140C77890: using guessed type __int64 qword_140C77890;

