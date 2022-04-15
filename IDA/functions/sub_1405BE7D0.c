#include "../winhttp.h"

//----- (00000001405BE7D0) ----------------------------------------------------
__int64 sub_1405BE7D0()
{
	__int64* v0; // r14
	unsigned int v1; // r15d
	__int64(__fastcall * v2)(wchar_t**, __int64); // rbx
	unsigned int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rbp
	unsigned int* v6; // rbx
	__int64 v7; // rsi
	unsigned int v8; // r8d
	__int64 v9; // r9
	__int64 v10; // rdx
	__int64 v11; // rdi
	bool v12; // al
	__int64 v13; // rcx
	__int64 i; // rax
	__int64 v15; // rax
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	int* v19; // rdi
	__int64 result; // rax
	__int64 j; // rcx
	unsigned int v22; // ebp
	unsigned int k; // esi
	int* v24; // rdi
	int* v25; // rbx
	unsigned __int64 v26; // rcx
	unsigned __int64 v27; // rdx
	unsigned int v28; // r8d
	unsigned int v29; // edi
	unsigned int v30; // r8d
	unsigned __int64 v31; // rcx
	unsigned __int64 v32; // rdx
	unsigned int v33; // edi
	__int64 v34; // [rsp+20h] [rbp-228h]
	int v35; // [rsp+30h] [rbp-218h] BYREF
	int v36[37]; // [rsp+38h] [rbp-210h] BYREF
	int v37[85]; // [rsp+CCh] [rbp-17Ch] BYREF

	v0 = (__int64*)qword_140C65B90;
	sub_1405BCF90((_QWORD*)qword_140C65B90);
	v1 = 0;
LABEL_2:
	v2 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6DB60, qword_140C63858);
		goto LABEL_7;
	}
	if (!dword_140C63D5C)
	{
		if ((int)sub_140243360() < 0)
		{
		LABEL_50:
			v2 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			goto LABEL_51;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C643A0 + 40i64))(qword_140C643A0);
	LABEL_7:
		if (v1 < v3)
		{
			if (qword_140C63848)
			{
				v4 = qword_140C63848(off_140A6DB60, v1, qword_140C63858);
			LABEL_15:
				v5 = v4;
				goto LABEL_16;
			}
			if (dword_140C63D5C)
			{
				v5 = 0i64;
			}
			else
			{
				if ((int)sub_140243360() >= 0)
				{
					v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643A0 + 32i64))(qword_140C643A0, v1);
					goto LABEL_15;
				}
				v5 = 0i64;
			}
		LABEL_16:
			v6 = (unsigned int*)(v5 + 20);
			v7 = 8i64;
			while (1)
			{
				v8 = *v6;
				if (*v6)
				{
					v9 = v0[26];
					LODWORD(v34) = *v6;
					v10 = *(_QWORD*)(v9 + 8);
					HIDWORD(v34) = *(_DWORD*)(v5 + 4);
					v11 = v9;
					v12 = 1;
					while (v10)
					{
						v11 = v10;
						v12 = v8 < *(_DWORD*)(v10 + 32);
						if (v8 >= *(_DWORD*)(v10 + 32))
							v10 = *(_QWORD*)(v10 + 24);
						else
							v10 = *(_QWORD*)(v10 + 16);
					}
					v13 = v11;
					if (v12)
					{
						if (v11 == *(_QWORD*)(v9 + 16))
							goto LABEL_35;
						if (*(_BYTE*)v11 || *(_QWORD*)(*(_QWORD*)(v11 + 8) + 8i64) != v11)
						{
							v13 = *(_QWORD*)(v11 + 16);
							if (v13)
							{
								for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
									v13 = i;
							}
							else
							{
								v13 = *(_QWORD*)(v11 + 8);
								if (v11 == *(_QWORD*)(v13 + 16))
								{
									do
									{
										v15 = v13;
										v13 = *(_QWORD*)(v13 + 8);
									} while (v15 == *(_QWORD*)(v13 + 16));
								}
							}
						}
						else
						{
							v13 = *(_QWORD*)(v11 + 24);
						}
					}
					if (*(_DWORD*)(v13 + 32) < v8)
					{
					LABEL_35:
						if (v11 == v9 || v8 < *(_DWORD*)(v11 + 32))
						{
							v16 = sub_14018B280(40i64, 0);
							if (v16 != (int*)-32i64)
								*((_QWORD*)v16 + 4) = v34;
							*(_QWORD*)(v11 + 16) = v16;
							v18 = v0[26];
							if (v11 == v18)
							{
								*(_QWORD*)(v18 + 8) = v16;
								*(_QWORD*)(v0[26] + 24) = v16;
							}
							else if (v11 == *(_QWORD*)(v18 + 16))
							{
								*(_QWORD*)(v18 + 16) = v16;
							}
						}
						else
						{
							v16 = sub_14018B280(40i64, 0);
							if (v16 != (int*)-32i64)
								*((_QWORD*)v16 + 4) = v34;
							*(_QWORD*)(v11 + 24) = v16;
							v17 = v0[26];
							if (v11 == *(_QWORD*)(v17 + 24))
								*(_QWORD*)(v17 + 24) = v16;
						}
						*((_QWORD*)v16 + 1) = v11;
						*((_QWORD*)v16 + 2) = 0i64;
						*((_QWORD*)v16 + 3) = 0i64;
						sub_1400081C0((__int64)v16, (_QWORD*)(v0[26] + 8));
						++v0[27];
					}
				}
				++v6;
				if (!--v7)
				{
					++v1;
					goto LABEL_2;
				}
			}
		}
		goto LABEL_50;
	}
LABEL_51:
	sub_1400B52A0((__int64)v36);
	sub_1407E4830(&v35, 0i64, 0x1F0ui64);
	sub_1407E4830(v36, 0i64, 0x138ui64);
	sub_1407E4830(v37, 0i64, 0x90ui64);
	v19 = v37;
	result = 197i64;
	for (j = 15i64; j; --j)
		*v19++ = 197;
	if (v2)
	{
		result = v2(off_140A6DD58, qword_140C63858);
	}
	else
	{
		if (dword_140C654F8)
		{
			v22 = 0;
			goto LABEL_62;
		}
		result = sub_1402459A0();
		if ((int)result < 0)
		{
			v22 = 0;
			goto LABEL_62;
		}
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
	}
	v22 = result;
LABEL_62:
	for (k = 0; k < v22; ++k)
	{
		result = (__int64)qword_140C63848;
		if (qword_140C63848)
		{
			result = qword_140C63848(off_140A6DD58, k, qword_140C63858);
		}
		else
		{
			if (dword_140C654F8)
			{
				v24 = 0i64;
				goto LABEL_71;
			}
			result = sub_1402459A0();
			if ((int)result < 0)
			{
				v24 = 0i64;
				goto LABEL_71;
			}
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(qword_140C63868, k);
		}
		v24 = (int*)result;
	LABEL_71:
		if (v24[2] == 22)
		{
			result = (__int64)sub_1400B5DF0(qword_140C658F0, v24[3], &v35);
			v25 = (int*)result;
			if (result)
			{
				if (*(_DWORD*)(result + 320) == 33)
				{
					sub_140003460(v0 + 29, v24);
					v26 = v0[32];
					v27 = 0i64;
					if (v26)
					{
						v28 = v25[88];
						do
						{
							result = v27 + ((v26 - v27) >> 1);
							v29 = *(_DWORD*)(v0[31] + 4 * result);
							if (v28 < v29)
							{
								v26 = v27 + ((v26 - v27) >> 1);
							}
							else
							{
								if (v29 >= v28)
									goto LABEL_82;
								v27 = result + 1;
							}
						} while (v27 < v26);
					}
					result = (__int64)sub_1401C2E70(v0 + 31, v27, v25 + 88);
				LABEL_82:
					v30 = v25[73];
					if (v30 && v25[74])
					{
						v31 = v0[34];
						v32 = 0i64;
						while (v32 < v31)
						{
							result = v32 + ((v31 - v32) >> 1);
							v33 = *(_DWORD*)(v0[33] + 4 * result);
							if (v30 < v33)
							{
								v31 = v32 + ((v31 - v32) >> 1);
							}
							else
							{
								if (v33 >= v30)
									goto LABEL_91;
								v32 = result + 1;
							}
						}
						result = (__int64)sub_1401C2E70(v0 + 33, v32, v25 + 73);
					}
				}
			}
		}
	LABEL_91:
		;
	}
	return result;
}
// 1405BE98F: conditional instruction was optimized away because rdx.8==0
// 140A6DB60: using guessed type wchar_t *off_140A6DB60[2];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C63D5C: using guessed type int dword_140C63D5C;
// 140C643A0: using guessed type __int64 qword_140C643A0;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;
// 1405BE7D0: using guessed type int var_210[37];
// 1405BE7D0: using guessed type int var_17C[85];

