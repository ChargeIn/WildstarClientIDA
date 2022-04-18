#include "../winhttp.h"

//----- (000000014043C1A0) ----------------------------------------------------
__int64 __fastcall sub_14043C1A0(__int64 a1, int* a2)
{
	int v3; // edx
	__int64 result; // rax
	__int64 v6; // rbp
	_QWORD* v7; // rdx
	_QWORD* v8; // rcx
	int v9; // eax
	__int64* v10; // rbx
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rsi
	_QWORD** v14; // rax
	int v15; // esi
	unsigned __int64 v16; // rdx
	__int64 v17; // rcx
	_DWORD* i; // rax
	__int64 v19; // rax
	int v20; // esi
	__int64* v21; // rcx
	__int64 v22; // rbx
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64 v25; // rcx
	int v26; // eax
	__int64* v27; // rbx
	__int64 v28; // rbx
	_QWORD* v29; // rsi
	int v30; // eax
	char v31[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v32; // [rsp+68h] [rbp+10h] BYREF

	v3 = a2[12];
	if (v3)
	{
		result = sub_1405A8A40(a1, v3);
		v6 = result;
		if (result)
		{
			v7 = *(_QWORD**)(a1 + 8);
			v8 = (_QWORD*)*v7;
			if ((_QWORD*)*v7 == v7)
			{
			LABEL_6:
				if (!(unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(result + 8)))
					sub_1405FCA00(*(_QWORD*)qword_140C65B80, **(_DWORD**)(v6 + 8), 1u);
				v9 = dword_140C658E4 + 1;
				*a2 = dword_140C658E4 + 1;
				v10 = *(__int64**)(a1 + 8);
				dword_140C658E4 = v9;
				v11 = *v10;
				v12 = sub_14018B280(104i64, 0);
				v13 = v12;
				if (v12 != (int*)-16i64)
					sub_14043DA70(v12 + 4, (__int64)a2);
				v14 = (_QWORD**)qword_140C65B80;
				*(_QWORD*)v13 = v11;
				*((_QWORD*)v13 + 1) = *(_QWORD*)(v11 + 8);
				**(_QWORD**)(v11 + 8) = v13;
				*(_QWORD*)(v11 + 8) = v13;
				v15 = 0;
				if ((unsigned int)sub_1405FBC40(*v14, **(_DWORD**)(v6 + 8)) == 2)
				{
					v16 = *(_QWORD*)(v6 + 144);
					v17 = 0i64;
					if (v16)
					{
						for (i = *(_DWORD**)(v6 + 136); a2[2] != *i; ++i)
						{
							if (++v17 >= v16)
								return Apollo_LUAEvent(
									*(_QWORD*)(qword_140C65898 + 29504),
									"Communicator_UpdateCallback",
									byte_1409E9034,
									1i64,
									v15);
						}
						v15 = 1;
					}
				}
				return Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"Communicator_UpdateCallback",
					byte_1409E9034,
					1i64,
					v15);
			}
			else
			{
				while (a2[12] != *((_DWORD*)v8 + 16))
				{
					v8 = (_QWORD*)*v8;
					if (v8 == v7)
						goto LABEL_6;
				}
			}
		}
		return result;
	}
	v19 = sub_1401F4FA0(a2[1]);
	if (v19)
		v20 = *(_DWORD*)(v19 + 12) & 2;
	else
		v20 = 0;
	v21 = *(__int64**)(a1 + 24);
	v22 = *v21;
	if ((__int64*)*v21 == v21)
	{
	LABEL_32:
		v26 = dword_140C658E0 + 1;
		*a2 = dword_140C658E0 + 1;
		v27 = *(__int64**)(a1 + 24);
		dword_140C658E0 = v26;
		v28 = *v27;
		result = (__int64)sub_14018B280(104i64, 0);
		v29 = (_QWORD*)result;
		if (result != -16)
			result = (__int64)sub_14043DA70((_DWORD*)(result + 16), (__int64)a2);
		*v29 = v28;
		v29[1] = *(_QWORD*)(v28 + 8);
		**(_QWORD**)(v28 + 8) = v29;
		*(_QWORD*)(v28 + 8) = v29;
		if (a2[13])
		{
			v30 = *a2;
			HIDWORD(v32) = a2[13];
			LODWORD(v32) = v30;
			return sub_140032F50(a1 + 32, (__int64)v31, &v32);
		}
		return result;
	}
	result = (unsigned int)a2[1];
	while (!(_DWORD)result || (_DWORD)result != *(_DWORD*)(v22 + 20))
	{
		v22 = *(_QWORD*)v22;
		if ((__int64*)v22 == v21)
			goto LABEL_32;
	}
	if (v20)
	{
		v23 = *(_QWORD*)v22;
		v24 = *(_QWORD**)(v22 + 8);
		*v24 = *(_QWORD*)v22;
		*(_QWORD*)(v23 + 8) = v24;
		v25 = *(_QWORD*)(v22 + 40);
		if (v25)
			sub_14018B900(v25, 0);
		sub_14018B900(v22, 0);
		goto LABEL_32;
	}
	return result;
}
// 1409E9034: using guessed type _BYTE byte_1409E9034[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658E0: using guessed type int dword_140C658E0;
// 140C658E4: using guessed type int dword_140C658E4;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14043C1A0: using guessed type char var_28[40];

