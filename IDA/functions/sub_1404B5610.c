#include "../winhttp.h"

//----- (00000001404B5610) ----------------------------------------------------
void __fastcall sub_1404B5610(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rbx
	unsigned int v5; // eax
	__int64 v6; // rax
	unsigned int v7; // eax
	int v8; // ecx
	__int64 v9; // r14
	unsigned __int64 v10; // rdi
	int v11; // ebp
	_QWORD* v12; // rbx
	__int64 v13; // rbx
	__int64 v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rbx
	__int64* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // r14
	unsigned int v24; // edi
	__int64 v25; // r15
	_DWORD* v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // [rsp+20h] [rbp-58h] BYREF
	__int64 v33; // [rsp+28h] [rbp-50h] BYREF
	__int64 v34; // [rsp+30h] [rbp-48h]
	__int64 v35; // [rsp+38h] [rbp-40h]
	__int64 v36; // [rsp+40h] [rbp-38h]

	v3 = a3;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v6 = sub_14024ACC0(v5);
	if (v6)
	{
		v7 = *(_DWORD*)(v6 + 20);
		if (v7 <= 8)
		{
			v8 = 420;
			if (_bittest(&v8, v7))
			{
				v9 = *(_QWORD*)(qword_140C65898 + 25744);
				if (v9)
				{
					v32 = v3;
					v10 = qword_140C7E000(&v32);
					v11 = 0;
					v12 = *(_QWORD**)(qword_140C7DFF8 + 8 * (v10 % qword_140C7DFF0));
					if (!v12)
						goto LABEL_9;
					while (v10 != *v12 || !(unsigned int)qword_140C7E008(&v32, v12 + 2))
					{
						v12 = (_QWORD*)v12[1];
						if (!v12)
							goto LABEL_9;
					}
					v17 = v12 + 3;
					if (v17)
						v13 = *v17;
					else
						LABEL_9:
					v13 = 0i64;
					v14 = sub_1405B16C0((__int64)&qword_140C7DFB0, a2, 1);
					if (!v14)
						v14 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v9 + 6124));
					if (v13)
					{
						if (*(_DWORD*)(v13 + 48) != 5 || v14)
						{
							if (sub_1405AC9B0(v13))
							{
								v15 = sub_1405AC9B0(v13);
								(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v15 + 24i64))(
									v15,
									2i64,
									*(unsigned int*)(v13 + 188));
							}
							if (sub_1405ACB80(v13))
							{
								v16 = sub_1405ACB80(v13);
								(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v16 + 24i64))(
									v16,
									2i64,
									*(unsigned int*)(v13 + 188));
							}
						}
						sub_1405AAEB0(v13);
					}
					else
					{
						v18 = (__int64*)xmmword_140C7DFC0;
						if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
						{
							while (1)
							{
								v19 = *v18;
								if (*(_DWORD*)(*v18 + 48) == 5)
									break;
								if (++v18 == *((__int64**)&xmmword_140C7DFC0 + 1))
									goto LABEL_33;
							}
							v20 = *v18;
							if (v19)
							{
								if (!v14)
									return;
								if (v14 != v19)
								{
									if (sub_1405AC9B0(*v18))
									{
										v21 = sub_1405AC9B0(v20);
										(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v21 + 24i64))(
											v21,
											2i64,
											*(unsigned int*)(v20 + 188));
									}
									if (sub_1405ACB80(v20))
									{
										v22 = sub_1405ACB80(v20);
										(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v22 + 24i64))(
											v22,
											2i64,
											*(unsigned int*)(v20 + 188));
									}
								}
							}
						}
					}
				LABEL_33:
					if (v14)
					{
						v34 = 0i64;
						v35 = 0i64;
						v36 = 0i64;
						sub_1405ACF20(v14, &v33, 4);
						v23 = v34;
						v24 = 0;
						v25 = (v35 - v34) / 104;
						if ((_DWORD)v25)
						{
							v26 = (_DWORD*)(v34 + 36);
							do
							{
								if (*(v26 - 1) == a2 && *v26 == 6)
								{
									v27 = sub_140207D60(v26[10]);
									if (!v27)
										goto LABEL_49;
									v11 = *(_DWORD*)(v27 + 40);
								}
								++v24;
								v26 += 26;
							} while (v24 < (unsigned int)v25);
							if (v11)
								goto LABEL_47;
						}
						v28 = sub_1402070A0(*(_DWORD*)(v14 + 64));
						if (v28)
						{
							if (*(_DWORD*)(v28 + 28) != a2 || !sub_1405ACB80(v14))
							{
							LABEL_47:
								*(_DWORD*)(qword_140C65898 + 31208) = v11;
								if (sub_1405AC9B0(v14))
								{
									v31 = sub_1405AC9B0(v14);
									(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v31 + 24i64))(
										v31,
										1i64,
										*(unsigned int*)(v14 + 188));
								}
								goto LABEL_49;
							}
							v29 = sub_1405ACB80(v14);
							v30 = sub_140207D60(*(_DWORD*)(v29 + 96));
							if (v30)
							{
								v11 = *(_DWORD*)(v30 + 40);
								goto LABEL_47;
							}
						}
					LABEL_49:
						if (v23)
							sub_14018B900(v23, 0);
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFF0: using guessed type __int64 qword_140C7DFF0;
// 140C7DFF8: using guessed type __int64 qword_140C7DFF8;
// 140C7E000: using guessed type __int64 (__fastcall *qword_140C7E000)(_QWORD);
// 140C7E008: using guessed type __int64 (__fastcall *qword_140C7E008)(_QWORD, _QWORD);

