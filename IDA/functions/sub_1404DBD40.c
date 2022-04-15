#include "../winhttp.h"

//----- (00000001404DBD40) ----------------------------------------------------
__int64 __fastcall sub_1404DBD40(__int64 a1, int* a2, __int64 a3, _DWORD* a4)
{
	int v5; // edi
	__int64 result; // rax
	unsigned __int64 v9; // rax
	__int64 v10; // rcx
	bool v11; // zf
	int* v12; // rdi
	int* v13; // r14
	__int64 v14; // rax
	__int64 v15; // rsi
	__int64 v16; // rax
	int* v17; // rsi
	__int64 v18; // r15
	_WORD* v19; // rax
	__int64 v20; // rsi
	__int64 v21; // rdi
	__int64 i; // rbx
	unsigned int v23; // eax
	int* v24; // rax
	int v25; // eax
	__int64 j; // rbx
	__int64 v27; // rcx
	char v28[8]; // [rsp+30h] [rbp-39h] BYREF
	int* v29; // [rsp+38h] [rbp-31h]
	__int64 v31; // [rsp+48h] [rbp-21h]
	char v32[8]; // [rsp+50h] [rbp-19h] BYREF
	int* v33; // [rsp+58h] [rbp-11h]
	_WORD* v34; // [rsp+60h] [rbp-9h]
	__int64 v35; // [rsp+68h] [rbp-1h]
	__int64 v36; // [rsp+70h] [rbp+7h] BYREF
	__int64 v37; // [rsp+78h] [rbp+Fh]
	__int64 v38; // [rsp+80h] [rbp+17h]
	__int64 v39; // [rsp+88h] [rbp+1Fh]
	int v40; // [rsp+90h] [rbp+27h]

	v5 = a3;
	result = sub_1400B66A0(a1, a2, a3, a4);
	if (!result)
	{
		if (v5)
		{
			if (*(_DWORD*)(a1 + 88))
			{
				if (a2)
				{
					v9 = sub_14018E5E0(a2, L"visual=");
					if (v9)
					{
						if ((int*)v9 == a2)
						{
							v10 = 0i64;
							do
								v11 = aVisual[++v10] == 0;
							while (!v11);
							v12 = (int*)(v9 + 2 * v10);
							if (*(_WORD*)v12)
							{
								v29 = 0i64;
								v13 = 0i64;
								v31 = 0i64;
								v14 = 0i64;
								do
									v11 = *((_WORD*)&unk_1409F0B9C + ++v14) == 0;
								while (!v11);
								v15 = (2 * v14) >> 1;
								if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
								{
									v13 = sub_14018B280(2 * (v15 + 1), 0);
									v29 = v13;
									v31 = (__int64)v13 + 2 * v15 + 2;
								}
								sub_1407DB590(v13, (int*)&unk_1409F0B9C, 2 * v15);
								if ((int*)((char*)v13 + 2 * v15))
									*((_WORD*)v13 + v15) = 0;
								v16 = 0i64;
								v17 = 0i64;
								v33 = 0i64;
								v35 = 0i64;
								if (*(_WORD*)v12)
								{
									do
										++v16;
									while (*((_WORD*)v12 + v16));
								}
								v18 = (2 * v16) >> 1;
								if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
								{
									v17 = sub_14018B280(2 * (v18 + 1), 0);
									v33 = v17;
									v35 = (__int64)v17 + 2 * v18 + 2;
								}
								sub_1407DB590(v17, v12, 2 * v18);
								v19 = (_WORD*)v17 + v18;
								v34 = v19;
								if (v19)
									*v19 = 0;
								sub_14018F570((__int64)&v36, (__int64)v32, (__int64)v28, 0, 0);
								if (v17)
									sub_14018B900((__int64)v17, 0);
								if (v13)
									sub_14018B900((__int64)v13, 0);
								v20 = v37;
								v21 = v38;
								for (i = v37; i != v21; i += 32i64)
								{
									v23 = sub_1407DF510(*(WCHAR**)(i + 8));
									v24 = (int*)sub_140248F00(v23);
									if (v24)
									{
										v25 = *v24;
										v36 = 0i64;
										v37 = 0i64;
										v38 = 0i64;
										v39 = 0i64;
										v40 = 0;
										HIDWORD(v36) = *(_DWORD*)(a1 + 88);
										LODWORD(v37) = v25;
										sub_140577660(qword_140C65B78, &v36);
									}
								}
								if (a4)
									*a4 = 1;
								for (j = v20; j != v21; j += 32i64)
								{
									v27 = *(_QWORD*)(j + 8);
									if (v27)
										sub_14018B900(v27, 0);
								}
								if (v20)
									sub_14018B900(v20, 0);
							}
						}
					}
				}
			}
		}
		return 0i64;
	}
	return result;
}
// 140B0A9F8: using guessed type wchar_t aVisual[8];
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 1404DBD40: using guessed type char var_90[8];
// 1404DBD40: using guessed type char var_70[8];

