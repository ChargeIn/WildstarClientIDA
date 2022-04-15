#include "../winhttp.h"

//----- (00000001402E0BA0) ----------------------------------------------------
__int64 __fastcall sub_1402E0BA0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64(__fastcall * v4)(__int64, _QWORD); // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 i; // rbx
	int v8; // eax
	int v9; // edx
	int v10; // eax
	__int64 v11; // rdi
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rbx
	__int64* v14; // rbx
	__int64 v15; // rbx
	int v16; // eax
	int v17; // eax
	int v18; // [rsp+50h] [rbp+8h] BYREF
	int v19; // [rsp+54h] [rbp+Ch]
	__int64 v20; // [rsp+58h] [rbp+10h] BYREF

	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1))
		return 2147500037i64;
	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(__int64(__fastcall**)(__int64, _QWORD))(v3 + 1864);
	if (v4)
	{
		v5 = v4(a1, *(_QWORD*)(v3 + 1928));
	}
	else if (sub_1401B5B50(*(__int64*)&qword_140C63788, (const __m128i*)(a1 + 616), 1i64, 4, &v20) < 0)
	{
		v5 = 0i64;
	}
	else
	{
		v6 = v20;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 32i64))(v20);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	}
	if (*(_QWORD*)(a1 + 1192) == v5)
		return 0i64;
	result = sub_1402DF1C0(a1);
	if ((int)result >= 0)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1952i64))
		{
			for (i = *(_QWORD*)(a1 + 5304); i; i = *(_QWORD*)(i + 520))
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(a1 + 16) + 1952i64))(
					i,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 2032i64));
		}
		v8 = *(_DWORD*)(a1 + 36);
		v9 = v8 - 1;
		v19 = v8 - 1;
		if (v8 - 1 >= v8 + 2)
		{
			return 0i64;
		}
		else
		{
			while (1)
			{
				v10 = *(_DWORD*)(a1 + 32);
				v18 = v10 - 1;
				if (v10 - 1 < v10 + 2)
					break;
			LABEL_27:
				++v9;
				v17 = *(_DWORD*)(a1 + 36) + 2;
				v19 = v9;
				if (v9 >= v17)
					return 0i64;
			}
			while (1)
			{
				v11 = *(_QWORD*)(a1 + 16);
				v12 = (*(__int64(__fastcall**)(int*))(v11 + 1688))(&v18);
				v13 = *(_QWORD**)(*(_QWORD*)(v11 + 1680) + 8 * (v12 % *(_QWORD*)(v11 + 1672)));
				if (v13)
				{
					while (v12 != *v13 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v11 + 1696))(&v18, v13 + 2))
					{
						v13 = (_QWORD*)v13[1];
						if (!v13)
							goto LABEL_25;
					}
					v14 = v13 + 3;
					if (v14)
					{
						v15 = *v14;
						if (v15)
						{
							if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v15 + 64i64))(v15))
							{
								result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 40i64))(v15);
								if ((int)result < 0)
									break;
							}
						}
					}
				}
			LABEL_25:
				v16 = *(_DWORD*)(a1 + 32) + 2;
				if (++v18 >= v16)
				{
					v9 = v19;
					goto LABEL_27;
				}
			}
		}
	}
	return result;
}

