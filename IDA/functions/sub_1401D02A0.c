#include "../winhttp.h"

//----- (00000001401D02A0) ----------------------------------------------------
__int64 __fastcall sub_1401D02A0(__int64 a1, void(__fastcall*** a2)(_QWORD), __int64 a3, _QWORD* a4)
{
	void(__fastcall * **v5)(_QWORD); // r14
	__int64 v6; // r15
	int* v8; // rax
	unsigned __int64 v9; // rsi
	__int64 v10; // rax
	unsigned __int64 v11; // rdi
	__int64 v12; // rax
	int* v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // r13
	unsigned __int64 v16; // r12
	int v17; // eax
	int* v18; // rdx
	int v19; // edi
	bool v20; // sf
	unsigned __int64 v21; // r14
	__int64 v22; // rax
	__int64 v23; // rdi
	int* v24; // rsi
	__int64* v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rdi
	int* v28; // rsi
	__int64* v29; // rdi
	unsigned __int64 v30; // r13
	unsigned __int64 v31; // r12
	unsigned __int64 v32; // rsi
	int v33; // edi
	__int64* v34; // r8
	int* v35; // rdx
	__int64* v36; // rdi
	int* v37; // rax
	__int64* v38; // rdi
	int* v39; // rax
	unsigned __int64 v40; // [rsp+20h] [rbp-68h]
	const __m128i* v41; // [rsp+20h] [rbp-68h]
	unsigned __int64 v42; // [rsp+28h] [rbp-60h]
	const __m128i* v43; // [rsp+30h] [rbp-58h]
	const __m128i* v44; // [rsp+38h] [rbp-50h]
	__int64 v45; // [rsp+38h] [rbp-50h]
	const __m128i* v46; // [rsp+40h] [rbp-48h]
	__int64 v47; // [rsp+48h] [rbp-40h]
	__int64 v48; // [rsp+48h] [rbp-40h]

	v5 = a2;
	v6 = a1;
	if (!a4)
		return 2147942487i64;
	if (a1)
	{
		if (a2)
		{
			v9 = (*(__int64 (**)(void))(*(_QWORD*)a1 + 56i64))();
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
			v47 = v10;
			if (v9 || v10)
			{
				v11 = ((__int64(__fastcall*)(_QWORD))(*v5)[7])(v5);
				v40 = v11;
				v12 = ((__int64(__fastcall*)(_QWORD))(*v5)[2])(v5);
				v42 = v12;
				if (v11 || v12)
				{
					v13 = sub_14018B280(64i64, 0);
					v14 = (__int64)v13;
					if (v13)
					{
						*(_QWORD*)v13 = off_140B5F120;
						*((_QWORD*)v13 + 2) = 0i64;
						*((_QWORD*)v13 + 1) = 0i64;
						*((_QWORD*)v13 + 4) = 0i64;
						*((_QWORD*)v13 + 3) = 0i64;
						*((_QWORD*)v13 + 6) = 0i64;
						*((_QWORD*)v13 + 5) = 0i64;
						v13[14] = 1;
					}
					else
					{
						v14 = 0i64;
					}
					v15 = 0i64;
					v16 = 0i64;
					if (v9)
					{
						while (v16 < v11)
						{
							v43 = (const __m128i*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 64i64))(
								v6,
								v15);
							v44 = (const __m128i*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[8])(
								v5,
								v16);
							v17 = sub_1401D1780(v43, v44);
							v18 = (int*)v43;
							v19 = v17;
							if (v17 > 0)
								v18 = (int*)v44;
							sub_1401D0B80(v14, v18);
							v15 += v19 <= 0;
							v20 = v19 < 0;
							v11 = v40;
							v16 += !v20;
							if (v15 >= v9)
								goto LABEL_30;
						}
						if (v15 < v9)
						{
							v21 = v9;
							do
							{
								v22 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 64i64))(v6, v15);
								v23 = *(_QWORD*)(v14 + 16);
								v24 = (int*)v22;
								sub_14004EED0((__int64*)(v14 + 8), v23 + 1);
								v25 = (__int64*)(*(_QWORD*)(v14 + 8) + 8 * v23);
								++v15;
								*v25 = sub_1401D15D0(v14, v24);
							} while (v15 < v21);
							v5 = a2;
							v11 = v40;
						}
					}
				LABEL_30:
					if (v16 < v11)
					{
						do
						{
							v26 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[8])(v5, v16);
							v27 = *(_QWORD*)(v14 + 16);
							v28 = (int*)v26;
							sub_14004EED0((__int64*)(v14 + 8), v27 + 1);
							v29 = (__int64*)(*(_QWORD*)(v14 + 8) + 8 * v27);
							++v16;
							*v29 = sub_1401D15D0(v14, v28);
						} while (v16 < v40);
						v6 = a1;
					}
					v30 = v47;
					v31 = 0i64;
					v32 = 0i64;
					if (v47)
					{
						while (v32 < v42)
						{
							v46 = (const __m128i*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 24i64))(
								v6,
								v31);
							v48 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 32i64))(v6, v31);
							v41 = (const __m128i*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[3])(
								v5,
								v32);
							v45 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[4])(v5, v32);
							v33 = sub_1401D1780(v46, v41);
							if (v33 > 0)
							{
								v34 = (__int64*)v45;
								v35 = (int*)v41;
							}
							else
							{
								v34 = (__int64*)v48;
								v35 = (int*)v46;
							}
							sub_1401D0AE0(v14, v35, v34);
							v31 += v33 <= 0;
							v32 += v33 >= 0;
							if (v31 >= v30)
								goto LABEL_42;
						}
						for (; v31 < v30; ++v31)
						{
							v36 = (__int64*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 32i64))(v6, v31);
							v37 = (int*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v6 + 24i64))(v6, v31);
							sub_1401D0AE0(v14, v37, v36);
						}
					}
				LABEL_42:
					while (v32 < v42)
					{
						v38 = (__int64*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[4])(
							v5,
							v32);
						v39 = (int*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD), unsigned __int64))(*v5)[3])(v5, v32);
						sub_1401D0AE0(v14, v39, v38);
						++v32;
					}
					*a4 = v14;
				}
				else
				{
					*a4 = v6;
					(**(void(__fastcall***)(__int64))v6)(v6);
				}
			}
			else
			{
				*a4 = v5;
				(**v5)(v5);
			}
		}
		else
		{
			*a4 = a1;
			(**(void(__fastcall***)(__int64))a1)(a1);
		}
	}
	else if (a2)
	{
		*a4 = a2;
		(**a2)(a2);
	}
	else
	{
		v8 = sub_14018B280(64i64, 0);
		if (v8)
		{
			*(_QWORD*)v8 = off_140B5F120;
			*((_QWORD*)v8 + 2) = 0i64;
			*((_QWORD*)v8 + 1) = 0i64;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			*((_QWORD*)v8 + 5) = 0i64;
			v8[14] = 1;
			*a4 = v8;
		}
		else
		{
			*a4 = 0i64;
		}
	}
	return 0i64;
}
// 140B5F120: using guessed type __int64 (__fastcall *off_140B5F120[20])();

