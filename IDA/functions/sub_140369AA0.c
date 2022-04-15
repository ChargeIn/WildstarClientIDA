#include "../winhttp.h"

//----- (0000000140369AA0) ----------------------------------------------------
__int64 __fastcall sub_140369AA0(__int64 a1, __int64* a2, int a3, unsigned int a4)
{
	__int64 result; // rax
	__int64 v7; // rdi
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	__int64 v10; // rax
	unsigned __int64 v11; // rsi
	__int64* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rsi
	__int64 v15; // rcx
	void(__fastcall * v16)(__int64, _QWORD, _QWORD); // rax
	void(__fastcall * v17)(__int64, __int64, _QWORD); // rax
	unsigned __int64 v18; // r12
	_QWORD* v19; // rbx
	_QWORD* v20; // rbx
	void(__fastcall * v21)(__int64, __int64, _QWORD); // rax
	unsigned __int64 v22; // r14
	_QWORD* v23; // rbx
	_QWORD* v24; // rbx
	__int64 v25; // [rsp+20h] [rbp-20h] BYREF
	int v26; // [rsp+28h] [rbp-18h]
	__int64 v27; // [rsp+30h] [rbp-10h]

	result = *a2;
	if (*a2)
	{
		v7 = a1 + 5136;
		v25 = *a2;
		v26 = a3;
		v8 = (*(__int64(__fastcall**)(__int64*))(a1 + 5160))(&v25);
		result = v8 / *(_QWORD*)(v7 + 8);
		v9 = *(_QWORD**)(*(_QWORD*)(v7 + 16) + 8 * (v8 % *(_QWORD*)(v7 + 8)));
		if (!v9)
			goto LABEL_6;
		while (1)
		{
			if (v8 == *v9)
			{
				result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(v7 + 32))(&v25, v9 + 2);
				if ((_DWORD)result)
					break;
			}
			v9 = (_QWORD*)v9[1];
			if (!v9)
				goto LABEL_6;
		}
		if (v9 == (_QWORD*)-32i64)
		{
		LABEL_6:
			if (a4)
			{
				v10 = *(_QWORD*)(v7 + 8);
				LODWORD(v27) = a4;
				if (*(_QWORD*)v7 == v10)
					sub_1400290D0(v7);
				v11 = (*(__int64(__fastcall**)(__int64*))(v7 + 24))(&v25);
				v12 = (__int64*)(*(_QWORD*)(v7 + 16) + 8 * (v11 % *(_QWORD*)(v7 + 8)));
				result = (__int64)sub_14018B280(48i64, 0);
				if (result)
				{
					v13 = *v12;
					*(_QWORD*)result = v11;
					*(_QWORD*)(result + 8) = v13;
					*(_QWORD*)(result + 16) = v25;
					*(_DWORD*)(result + 24) = v26;
					*(_QWORD*)(result + 32) = v27;
					*(_QWORD*)(result + 40) = 0i64;
				}
				*v12 = result;
				++* (_QWORD*)v7;
			}
		}
		else
		{
			result = v9[4];
			v14 = v9[5];
			v27 = result;
			v15 = (unsigned int)result;
			if ((_DWORD)result != a4)
			{
				if (v14)
				{
					if ((_DWORD)result)
					{
						v16 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(a1 + 5176);
						if (v16)
						{
							v16(v15, 0i64, *(_QWORD*)(a1 + 5184));
							sub_1403790A0((_QWORD**)v14);
						}
						v17 = *(void(__fastcall**)(__int64, __int64, _QWORD))(a1 + 5208);
						if (v17)
							v17(v14, 3i64, *(_QWORD*)(a1 + 5216));
						if (*(_QWORD*)(a1 + 5176))
							sub_1403791A0(v14);
					}
					*(_DWORD*)(v14 + 104) = a4;
					LODWORD(v27) = a4;
					v18 = (*(__int64(__fastcall**)(__int64*))(v7 + 24))(&v25);
					result = v18 / *(_QWORD*)(v7 + 8);
					v19 = *(_QWORD**)(*(_QWORD*)(v7 + 16) + 8 * (v18 % *(_QWORD*)(v7 + 8)));
					if (v19)
					{
						while (1)
						{
							if (v18 == *v19)
							{
								result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(v7 + 32))(&v25, v19 + 2);
								if ((_DWORD)result)
									break;
							}
							v19 = (_QWORD*)v19[1];
							if (!v19)
								goto LABEL_28;
						}
						v20 = v19 + 4;
						if (v20)
						{
							result = v27;
							*v20 = v27;
							v20[1] = v14;
						}
					}
				LABEL_28:
					if (a4)
					{
						v21 = *(void(__fastcall**)(__int64, __int64, _QWORD))(a1 + 5208);
						if (v21)
						{
							v21(v14, 2i64, *(_QWORD*)(a1 + 5216));
							sub_1403790A0((_QWORD**)v14);
						}
						result = *(_QWORD*)(a1 + 5176);
						if (result)
							result = ((__int64(__fastcall*)(_QWORD, __int64, _QWORD))result)(a4, v14, *(_QWORD*)(a1 + 5184));
						if (*(_QWORD*)(a1 + 5208))
							return sub_1403791A0(v14);
					}
				}
				else if (a4)
				{
					LODWORD(v27) = a4;
					v22 = (*(__int64(__fastcall**)(__int64*))(v7 + 24))(&v25);
					result = v22 / *(_QWORD*)(v7 + 8);
					v23 = *(_QWORD**)(*(_QWORD*)(v7 + 16) + 8 * (v22 % *(_QWORD*)(v7 + 8)));
					if (v23)
					{
						while (1)
						{
							if (v22 == *v23)
							{
								result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(v7 + 32))(&v25, v23 + 2);
								if ((_DWORD)result)
									break;
							}
							v23 = (_QWORD*)v23[1];
							if (!v23)
								return result;
						}
						v24 = v23 + 4;
						if (v24)
						{
							result = v27;
							*v24 = v27;
							v24[1] = 0i64;
						}
					}
				}
				else
				{
					return sub_1400B6120(v7, (__int64)&v25);
				}
			}
		}
	}
	return result;
}

