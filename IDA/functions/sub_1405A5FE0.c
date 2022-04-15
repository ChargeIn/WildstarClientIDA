#include "../winhttp.h"

//----- (00000001405A5FE0) ----------------------------------------------------
__int64 __fastcall sub_1405A5FE0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 i; // rsi
	unsigned __int64 j; // rdi
	unsigned int k; // r14d
	__int64 v10; // r8
	_BOOL8 v11; // r9
	_QWORD* v12; // rbx
	_QWORD* v13; // rbp
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int v16; // edx
	int v17; // edx
	int v18; // edx
	unsigned int v19; // eax
	int v20; // eax
	int v21; // eax
	__int64 v22; // rdx
	__int64 v23; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	unsigned __int64 v26; // rdi
	__int64(__fastcall * v27)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v28; // ebx
	__int64 v29; // rax
	_QWORD* v30; // rbx
	unsigned __int64 v31; // rcx
	__int64 v32; // rdx
	unsigned __int64 v33; // rcx
	__int64 v34; // rdx
	unsigned __int64 v35; // rcx
	__int64 v36; // rdx
	unsigned __int64 v37; // rcx
	__int64 v38; // rdx
	unsigned __int64 v39; // rcx
	__int64 v40; // rdx
	unsigned __int64 v41; // rcx
	__int64 v42; // rdx
	unsigned __int64 v43; // rcx
	__int64 v44; // rdx
	unsigned __int64 v45; // rdi
	unsigned int v46; // ebx
	_QWORD* v47; // rbx
	unsigned __int64 v48; // rcx
	__int64 v49; // rdx
	unsigned __int64 v50; // rcx
	__int64 v51; // rdx
	unsigned __int64 v52; // rcx
	__int64 v53; // rdx
	unsigned __int64 v54; // rcx
	__int64 v55; // rdx
	unsigned __int64 v56; // rcx
	__int64 v57; // rdx
	unsigned __int64 v58; // rcx
	__int64 v59; // rdx
	unsigned __int64 v60; // rcx
	__int64 v61; // rdx

	result = *(_QWORD*)(a2 + 112);
	if (*(_DWORD*)(result + 260))
	{
		if (*(_QWORD*)(a2 + 8))
		{
			for (i = 0i64; i < 8; ++i)
			{
				for (j = 0i64; j < 8; ++j)
				{
					for (k = 0; k < 0x20; ++k)
					{
						v10 = *(unsigned int*)(*(_QWORD*)(a2 + 8) + 28i64);
						v11 = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) == 8;
						v12 = *(_QWORD**)(qword_140C65B70 + 1624);
						v13 = v12;
						v14 = v12[1];
						v15 = v14;
						if (v14)
						{
							while (1)
							{
								if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) == 8)
								{
									if (!*(_DWORD*)(v15 + 32))
										goto LABEL_19;
								}
								else if (*(_DWORD*)(v15 + 32))
								{
									v13 = (_QWORD*)v15;
									v15 = *(_QWORD*)(v15 + 16);
									goto LABEL_20;
								}
								v16 = *(_DWORD*)(v15 + 36);
								if ((unsigned int)v10 >= v16)
								{
									if ((unsigned int)v10 > v16
										|| (v17 = *(_DWORD*)(v15 + 40), (int)i >= v17)
										&& ((int)i > v17
											|| (v18 = *(_DWORD*)(v15 + 44), (int)j >= v18) && ((int)j > v18 || k >= *(_DWORD*)(v15 + 48))))
									{
									LABEL_19:
										v15 = *(_QWORD*)(v15 + 24);
										goto LABEL_20;
									}
								}
								v13 = (_QWORD*)v15;
								v15 = *(_QWORD*)(v15 + 16);
							LABEL_20:
								if (!v15)
								{
									while (1)
									{
										if (*(_DWORD*)(v14 + 32))
										{
											if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) != 8)
												goto LABEL_33;
										}
										else if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) == 8)
										{
											goto LABEL_32;
										}
										v19 = *(_DWORD*)(v14 + 36);
										if (v19 >= (unsigned int)v10)
										{
											if (v19 > (unsigned int)v10
												|| (v20 = *(_DWORD*)(v14 + 40), v20 >= (int)i)
												&& (v20 > (int)i
													|| (v21 = *(_DWORD*)(v14 + 44), v21 >= (int)j) && (v21 > (int)j || *(_DWORD*)(v14 + 48) >= k)))
											{
											LABEL_33:
												v12 = (_QWORD*)v14;
												v14 = *(_QWORD*)(v14 + 16);
												goto LABEL_34;
											}
										}
									LABEL_32:
										v14 = *(_QWORD*)(v14 + 24);
									LABEL_34:
										if (!v14)
											goto LABEL_35;
									}
								}
							}
						}
					LABEL_35:
						while (v12 != v13)
						{
							v22 = v12[7];
							if (*(_DWORD*)(v22 + 32) != 3)
								(*(void(__fastcall**)(__int64, _QWORD, __int64, _BOOL8))a3)(
									a1 + *(int*)(a3 + 8),
									*(_QWORD*)(v22 + 88),
									v10,
									v11);
							v23 = v12[3];
							if (v23)
							{
								v12 = (_QWORD*)v12[3];
								for (m = *(_QWORD**)(v23 + 16); m; m = (_QWORD*)m[2])
									v12 = m;
							}
							else
							{
								for (n = v12[1]; v12 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
									v12 = (_QWORD*)n;
								if (v12[3] != n)
									v12 = (_QWORD*)n;
							}
						}
					}
				}
			}
		}
		if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 80i64))
		{
			v26 = 84i64;
			while (1)
			{
				v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				v28 = *(_DWORD*)(v26 + *(_QWORD*)(a2 + 112));
				if (qword_140C63840)
				{
					v29 = qword_140C63840(off_140A6D188, v28, qword_140C63858);
				}
				else
				{
					if (dword_140C64F14)
						goto LABEL_95;
					if ((int)sub_140237420() < 0)
						break;
					v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(qword_140C64A28, v28);
				}
				v30 = (_QWORD*)v29;
				if (v29)
				{
					v31 = *(_QWORD*)(v29 + 24);
					if (v31)
						v32 = v31 <= qword_140C3FE70 ? v31 + qword_140C3FE68 : 0i64;
					else
						v32 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v32);
					v33 = v30[4];
					if (v33)
						v34 = v33 <= qword_140C3FE70 ? v33 + qword_140C3FE68 : 0i64;
					else
						v34 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v34);
					v35 = v30[5];
					if (v35)
						v36 = v35 <= qword_140C3FE70 ? v35 + qword_140C3FE68 : 0i64;
					else
						v36 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v36);
					v37 = v30[14];
					if (v37)
						v38 = v37 <= qword_140C3FE70 ? v37 + qword_140C3FE68 : 0i64;
					else
						v38 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v38);
					v39 = v30[16];
					if (v39)
						v40 = v39 <= qword_140C3FE70 ? v39 + qword_140C3FE68 : 0i64;
					else
						v40 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v40);
					v41 = v30[17];
					if (v41)
						v42 = v41 <= qword_140C3FE70 ? v41 + qword_140C3FE68 : 0i64;
					else
						v42 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v42);
					v43 = v30[18];
					if (v43)
						v44 = v43 <= qword_140C3FE70 ? v43 + qword_140C3FE68 : 0i64;
					else
						v44 = 0i64;
					(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v44);
					v26 += 4i64;
					if (v26 < 0x6C)
						continue;
				}
				break;
			}
		}
		v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	LABEL_95:
		result = *(_QWORD*)(a2 + 112);
		if (*(_DWORD*)(result + 52))
		{
			v45 = 56i64;
			while (1)
			{
				result = *(_QWORD*)(a2 + 112);
				v46 = *(_DWORD*)(v45 + result);
				if (v27)
				{
					result = v27(off_140A6D188, v46, qword_140C63858);
				}
				else
				{
					if (dword_140C64F14)
						return result;
					result = sub_140237420();
					if ((int)result < 0)
						return result;
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(
						qword_140C64A28,
						v46);
				}
				v47 = (_QWORD*)result;
				if (!result)
					break;
				v48 = *(_QWORD*)(result + 24);
				if (v48)
					v49 = v48 <= qword_140C3FE70 ? v48 + qword_140C3FE68 : 0i64;
				else
					v49 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v49);
				v50 = v47[4];
				if (v50)
					v51 = v50 <= qword_140C3FE70 ? v50 + qword_140C3FE68 : 0i64;
				else
					v51 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v51);
				v52 = v47[5];
				if (v52)
					v53 = v52 <= qword_140C3FE70 ? v52 + qword_140C3FE68 : 0i64;
				else
					v53 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v53);
				v54 = v47[14];
				if (v54)
					v55 = v54 <= qword_140C3FE70 ? v54 + qword_140C3FE68 : 0i64;
				else
					v55 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v55);
				v56 = v47[16];
				if (v56)
					v57 = v56 <= qword_140C3FE70 ? v56 + qword_140C3FE68 : 0i64;
				else
					v57 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v57);
				v58 = v47[17];
				if (v58)
					v59 = v58 <= qword_140C3FE70 ? v58 + qword_140C3FE68 : 0i64;
				else
					v59 = 0i64;
				(*(void(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v59);
				v60 = v47[18];
				if (v60)
					v61 = v60 <= qword_140C3FE70 ? v60 + qword_140C3FE68 : 0i64;
				else
					v61 = 0i64;
				result = (*(__int64(__fastcall**)(__int64, __int64))a3)(a1 + *(int*)(a3 + 8), v61);
				v45 += 4i64;
				if (v45 >= 0x50)
					break;
				v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
		}
	}
	return result;
}
// 1405A60C9: conditional instruction was optimized away because rcx.8!=0
// 1405A6135: variable 'v10' is possibly undefined
// 1405A6135: variable 'v11' is possibly undefined
// 140A6D188: using guessed type wchar_t *off_140A6D188[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A28: using guessed type __int64 qword_140C64A28;
// 140C64F14: using guessed type int dword_140C64F14;
// 140C65B70: using guessed type __int64 qword_140C65B70;

