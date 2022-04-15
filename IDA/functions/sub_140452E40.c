#include "../winhttp.h"

//----- (0000000140452E40) ----------------------------------------------------
__int64 __fastcall sub_140452E40(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v4; // r8
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v11; // rax
	unsigned int v12; // edi
	unsigned int v13; // ebx
	__int64 v14; // rbx
	int* v15; // r10
	__int64 v16; // r9
	int* v17; // rcx
	__int64 v18; // rdx
	int v19; // eax
	int v20; // [rsp+20h] [rbp-28h] BYREF
	__int64 v21; // [rsp+24h] [rbp-24h]
	int v22; // [rsp+2Ch] [rbp-1Ch]
	int* v23; // [rsp+50h] [rbp+8h] BYREF
	int* v24; // [rsp+58h] [rbp+10h] BYREF

	result = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD**)(result + 16);
	if (v4 != (_QWORD*)result)
	{
		do
		{
			v6 = v4[6];
			v7 = *(_QWORD*)(v6 + 16);
			if (v7 != v6)
			{
				do
				{
					v8 = *(_QWORD*)(v7 + 24);
					*(_DWORD*)(v7 + 40) = 0;
					if (v8)
					{
						v7 = v8;
						for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
							v7 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v7 = j;
						if (*(_QWORD*)(v7 + 24) != j)
							v7 = j;
					}
				} while (v7 != v4[6]);
			}
			v11 = v4[3];
			if (v11)
			{
				v4 = (_QWORD*)v4[3];
				for (result = *(_QWORD*)(v11 + 16); result; result = *(_QWORD*)(result + 16))
					v4 = (_QWORD*)result;
			}
			else
			{
				for (result = v4[1]; v4 == *(_QWORD**)(result + 24); result = *(_QWORD*)(result + 8))
					v4 = (_QWORD*)result;
				if (v4[3] != result)
					v4 = (_QWORD*)result;
			}
		} while (v4 != *(_QWORD**)(a1 + 8));
	}
	v12 = 0;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			v13 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4i64 * v12);
			result = (__int64)qword_140C63840;
			if (qword_140C63840)
				break;
			if (!dword_140C64C20)
			{
				result = sub_1402010C0();
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E50 + 24i64))(
						qword_140C64E50,
						v13);
				LABEL_27:
					v14 = result;
					if (result)
					{
						v15 = sub_140453190(a1, (int*)(result + 24));
						v16 = *((_QWORD*)v15 + 1);
						v17 = (int*)v16;
						v18 = *(_QWORD*)(v16 + 8);
						while (v18)
						{
							if (*(_DWORD*)(v18 + 32) < *(_DWORD*)(v14 + 28))
							{
								v18 = *(_QWORD*)(v18 + 24);
							}
							else
							{
								v17 = (int*)v18;
								v18 = *(_QWORD*)(v18 + 16);
							}
						}
						if (v17 == (int*)v16 || (result = (unsigned int)v17[8], *(_DWORD*)(v14 + 28) < (unsigned int)result))
						{
							v19 = *(_DWORD*)(v14 + 28);
							v23 = v17;
							v20 = v19;
							v21 = 0i64;
							v22 = 0;
							result = (__int64)sub_1403AE630((__int64)v15, &v24, (__int64*)&v23, &v20);
							v17 = v24;
						}
						v17[10] = 1;
					}
				}
			}
			if (++v12 >= *(_DWORD*)a2)
				return result;
		}
		result = qword_140C63840(off_140A6A4E8, v13, qword_140C63858);
		goto LABEL_27;
	}
	return result;
}
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;

