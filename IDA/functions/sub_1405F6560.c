#include "../winhttp.h"

//----- (00000001405F6560) ----------------------------------------------------
__int64* __fastcall sub_1405F6560(__int64 a1, __int64* a2)
{
	__int64 v2; // rcx
	_QWORD* v4; // rax
	_QWORD* v5; // rsi
	__int64 v6; // rax
	_QWORD* v7; // rbx
	_QWORD* v8; // rdi
	_QWORD* v9; // rsi
	bool v10; // zf
	__int64 v11; // rax
	int v12; // r15d
	int v13; // ebp
	int v14; // eax
	__int64 v15; // rbx
	__int64 v16; // r12
	int v17; // r14d
	int* v18; // rax
	__int64 v19; // rcx
	int* v20; // rbx
	int* v21; // rsi
	__int64 v22; // rax
	__int64 v23; // rbx
	int v24; // r12d
	int v25; // ebp
	int v26; // eax
	__int64 v27; // r14
	int v28; // r15d
	int* v29; // rax
	__int64 v30; // rcx
	int* v31; // rbp
	__int64 v32; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v35; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	_QWORD* v38; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	_QWORD* v42; // [rsp+70h] [rbp+8h]
	_QWORD* v43; // [rsp+78h] [rbp+10h]
	int* v44; // [rsp+80h] [rbp+18h]
	__int64 v45; // [rsp+88h] [rbp+20h]

	v2 = qword_140C65980;
	a2[1] = 0i64;
	*a2 = 0i64;
	v4 = *(_QWORD**)(v2 + 16);
	v5 = (_QWORD*)v4[2];
	v45 = v2;
	v43 = v5;
	if (v5 != v4)
	{
		do
		{
			v6 = v5[5];
			if (v6)
			{
				v7 = *(_QWORD**)(v6 + 32);
				v42 = v7;
				if (v7)
				{
					do
					{
						v8 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v7 + 72i64))(v7) + 8) + 16i64);
						while (v8 != *(_QWORD**)((*(__int64(__fastcall**)(_QWORD*))(*v7 + 72i64))(v7) + 8))
						{
							v9 = (_QWORD*)v8[5];
							if ((*(unsigned int(__fastcall**)(_QWORD*))(*v9 + 104i64))(v9))
							{
								v10 = (*(unsigned int(__fastcall**)(_QWORD*))(*v9 + 336i64))(v9) == 22;
								v11 = *v9;
								if (v10)
								{
									v12 = (*(__int64(__fastcall**)(_QWORD*))(v11 + 152))(v9);
									v13 = (*(__int64(__fastcall**)(_QWORD*))(*v9 + 352i64))(v9);
									v14 = (*(__int64(__fastcall**)(_QWORD*))(*v9 + 344i64))(v9);
									v15 = a2[1];
									v16 = v15 + 1;
									v17 = v14;
									v18 = sub_14018DB00(*a2, v15 + 1, 12i64);
									v19 = 3 * v15;
									v20 = (int*)*a2;
									v18[v19] = v13;
									v18[v19 + 1] = v12;
									v21 = v18;
									v18[v19 + 2] = v17;
									if (v20 != v18)
									{
										sub_1407DB590(v18, v20, 12 * a2[1]);
										if (v20)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
										*a2 = (__int64)v21;
									}
									a2[1] = v16;
								LABEL_27:
									v7 = v42;
									goto LABEL_28;
								}
								if ((*(unsigned int(__fastcall**)(_QWORD*))(v11 + 336))(v9) == 28)
								{
									v22 = v9[29];
									v23 = *(_QWORD*)(v22 + 16);
									if (v23 != v22)
									{
										do
										{
											v24 = *(_DWORD*)(v23 + 36);
											v25 = *(_DWORD*)(v23 + 32);
											v26 = (*(__int64(__fastcall**)(_QWORD*))(*v9 + 344i64))(v9);
											v27 = a2[1];
											v28 = v26;
											v29 = sub_14018DB00(*a2, v27 + 1, 12i64);
											v30 = 3 * v27;
											v29[v30] = v25;
											v31 = (int*)*a2;
											v29[v30 + 1] = v24;
											v44 = v29;
											v29[v30 + 2] = v28;
											if (v31 != v29)
											{
												sub_1407DB590(v29, v31, 12 * a2[1]);
												if (v31)
													(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
												*a2 = (__int64)v44;
											}
											a2[1] = v27 + 1;
											v32 = *(_QWORD*)(v23 + 24);
											if (v32)
											{
												v23 = *(_QWORD*)(v23 + 24);
												for (i = *(_QWORD*)(v32 + 16); i; i = *(_QWORD*)(i + 16))
													v23 = i;
											}
											else
											{
												for (j = *(_QWORD*)(v23 + 8); v23 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
													v23 = j;
												if (*(_QWORD*)(v23 + 24) != j)
													v23 = j;
											}
										} while (v23 != v9[29]);
									}
									goto LABEL_27;
								}
							}
						LABEL_28:
							v35 = v8[3];
							if (v35)
							{
								v8 = (_QWORD*)v8[3];
								for (k = *(_QWORD**)(v35 + 16); k; k = (_QWORD*)k[2])
									v8 = k;
							}
							else
							{
								for (m = v8[1]; v8 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
									v8 = (_QWORD*)m;
								if (v8[3] != m)
									v8 = (_QWORD*)m;
							}
						}
						v7 = (_QWORD*)v7[2];
						v42 = v7;
					} while (v7);
					v5 = v43;
					v2 = v45;
				}
			}
			v38 = (_QWORD*)v5[3];
			if (v38)
			{
				v5 = (_QWORD*)v5[3];
				v43 = v38;
				for (n = (_QWORD*)v38[2]; n; n = (_QWORD*)n[2])
				{
					v5 = n;
					v43 = n;
				}
			}
			else
			{
				for (ii = v5[1]; v5 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v5 = (_QWORD*)ii;
				if (v5[3] != ii)
					v5 = (_QWORD*)ii;
				v43 = v5;
			}
		} while (v5 != *(_QWORD**)(v2 + 16));
	}
	return a2;
}
// 140C65980: using guessed type __int64 qword_140C65980;

