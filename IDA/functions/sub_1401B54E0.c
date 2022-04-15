#include "../winhttp.h"

//----- (00000001401B54E0) ----------------------------------------------------
__int64 __fastcall sub_1401B54E0(__int64 a1, __m128i* a2, __int64 a3, __int64** a4)
{
	__int64 v4; // r14
	char v6; // r15
	__int64* v8; // rbx
	int v9; // eax
	int v10; // edi
	int v11; // eax
	__int64 v12; // r8
	__int64* v13; // rsi
	__int64* v14; // rdi
	__int64 v15; // rsi
	unsigned int v16; // r15d
	__int64 v17; // rax
	__int64* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // r8
	__int64* v21; // rdi
	int v22; // eax
	__int64 v23; // r8
	__int64* v24; // rdi
	int* v25; // rax
	__int64* v27; // [rsp+28h] [rbp-E0h] BYREF
	void(__fastcall * **v28)(_QWORD); // [rsp+30h] [rbp-D8h] BYREF
	__int64* v29; // [rsp+38h] [rbp-D0h] BYREF
	__int64* v30; // [rsp+40h] [rbp-C8h] BYREF
	__int64* v31; // [rsp+48h] [rbp-C0h] BYREF
	__int64* v32; // [rsp+50h] [rbp-B8h] BYREF
	__int64* v33; // [rsp+58h] [rbp-B0h] BYREF
	_WORD v34[264]; // [rsp+68h] [rbp-A0h] BYREF
	_WORD v35[264]; // [rsp+278h] [rbp+170h] BYREF

	v4 = *(_QWORD*)&qword_140C63788;
	v6 = a3;
	if (!a2 || !a4)
		return 2147942487i64;
	v8 = 0i64;
	v27 = 0i64;
	if (!*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 2160i64)
		|| (a3 & 2) == 0
		|| !sub_1401B5360(*(__int64*)&qword_140C63788, v35, a3, a2)
		|| (v9 = sub_1401CFFA0(0i64, v35, 0, &v27), v8 = v27, v10 = v9, v9 >= 0))
	{
		if (sub_1401B5110(v4, v34, a3, (__int64)a2))
		{
			if (!*(_DWORD*)(v4 + 2160))
				goto LABEL_21;
			v32 = 0i64;
			v31 = 0i64;
			v11 = sub_1401CFFA0((char*)(v4 + 1600), v34, v6 & 1, &v32);
			v13 = v32;
			v10 = v11;
			if (v11 >= 0)
			{
				v10 = sub_1401D02A0((__int64)v8, (void(__fastcall***)(_QWORD))v32, v12, &v31);
				if (v10 >= 0)
				{
					v14 = v31;
					if (v8 != v31)
					{
						if (v31)
							(*(void(__fastcall**)(__int64*)) * v31)(v31);
						if (v8)
							(*(void(__fastcall**)(__int64*))(*v8 + 8))(v8);
						v8 = v14;
						v27 = v14;
					}
					if (v14)
						(*(void(__fastcall**)(__int64*))(*v14 + 8))(v14);
					if (v13)
						(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
				LABEL_21:
					if ((v6 & 4) == 0)
					{
						v15 = 0i64;
						if (*(_QWORD*)(v4 + 2136))
						{
							v16 = v6 & 1;
							while (1)
							{
								v17 = *(_QWORD*)(v4 + 2128);
								v28 = 0i64;
								v18 = *(__int64**)(v17 + 8 * v15);
								v19 = *v18;
								v30 = 0i64;
								v10 = (*(__int64(__fastcall**)(__int64*, _WORD*, _QWORD, void(__fastcall****)(_QWORD)))(v19 + 56))(
									v18,
									v34,
									v16,
									&v28);
								if (v10 < 0)
									break;
								v10 = sub_1401D02A0((__int64)v8, v28, v20, &v30);
								if (v10 < 0)
								{
									if (v30)
										(*(void(__fastcall**)(__int64*))(*v30 + 8))(v30);
									break;
								}
								v21 = v30;
								if (v8 != v30)
								{
									if (v30)
										(*(void(__fastcall**)(__int64*)) * v30)(v30);
									if (v8)
										(*(void(__fastcall**)(__int64*))(*v8 + 8))(v8);
									v8 = v21;
									v27 = v21;
								}
								if (v21)
									(*(void(__fastcall**)(__int64*))(*v21 + 8))(v21);
								if (v28)
									(*v28)[1](v28);
								if ((unsigned __int64)++v15 >= *(_QWORD*)(v4 + 2136))
									goto LABEL_58;
							}
							if (v28)
								(*v28)[1](v28);
							goto LABEL_66;
						}
					}
					goto LABEL_58;
				}
				if (v31)
					(*(void(__fastcall**)(__int64*))(*v31 + 8))(v31);
			}
			if (v13)
				goto LABEL_65;
		}
		else
		{
			v33 = 0i64;
			v29 = 0i64;
			v22 = sub_1401CFFA0(0i64, a2, v6 & 1, &v33);
			v13 = v33;
			v10 = v22;
			if (v22 >= 0)
			{
				v10 = sub_1401D02A0((__int64)v8, (void(__fastcall***)(_QWORD))v33, v23, &v29);
				if (v10 >= 0)
				{
					v24 = v29;
					if (v8 != v29)
					{
						if (v29)
							(*(void(__fastcall**)(__int64*)) * v29)(v29);
						if (v8)
							(*(void(__fastcall**)(__int64*))(*v8 + 8))(v8);
						v8 = v24;
						v27 = v24;
					}
					if (v24)
						(*(void(__fastcall**)(__int64*))(*v24 + 8))(v24);
					if (v13)
						(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
				LABEL_58:
					if (!v8)
					{
						v25 = sub_14018B280(64i64, 0);
						if (v25)
						{
							v8 = (__int64*)v25;
							*(_QWORD*)v25 = off_140B5F120;
							*((_QWORD*)v25 + 2) = 0i64;
							*((_QWORD*)v25 + 1) = 0i64;
							*((_QWORD*)v25 + 4) = 0i64;
							*((_QWORD*)v25 + 3) = 0i64;
							*((_QWORD*)v25 + 6) = 0i64;
							*((_QWORD*)v25 + 5) = 0i64;
							v25[14] = 1;
						}
					}
					*a4 = v8;
					(*(void(__fastcall**)(__int64*)) * v8)(v8);
					v10 = 0;
					goto LABEL_66;
				}
				if (v29)
					(*(void(__fastcall**)(__int64*))(*v29 + 8))(v29);
			}
			if (v13)
				LABEL_65:
			(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
		}
	}
LABEL_66:
	if (v8)
		(*(void(__fastcall**)(__int64*))(*v8 + 8))(v8);
	return (unsigned int)v10;
}
// 1401B5599: variable 'a3' is possibly undefined
// 1401B55F5: variable 'v12' is possibly undefined
// 1401B56AF: variable 'v20' is possibly undefined
// 1401B57A8: variable 'v23' is possibly undefined
// 140B5F120: using guessed type __int64 (__fastcall *off_140B5F120[20])();
// 1401B54E0: using guessed type _WORD var_250[264];

