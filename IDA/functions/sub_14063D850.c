#include "../winhttp.h"

//----- (000000014063D850) ----------------------------------------------------
char __fastcall sub_14063D850(__int64 a1, char* a2)
{
	__int64 v3; // r13
	__int64 v4; // rcx
	__int64 v5; // r8
	__int64 v6; // r9
	_WORD* v7; // rbx
	_WORD* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // r9
	unsigned __int64 v13; // rdi
	__int64* v14; // r8
	unsigned __int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // r9
	unsigned __int64 v20; // rdi
	__int64 v21; // rcx
	__int64 v22; // rbx
	__int64 v23; // rax
	int v24; // eax
	__int64 v25; // rcx
	bool v26; // sf
	__int64 v27; // rax
	__int64 v28; // rsi
	int* v29; // rsi
	__int64 v30; // rbx
	int* v31; // rax
	int* v32; // rdi
	__int64 v34; // r8
	__int64 v35; // rcx
	__m128i* p_Buffer; // rax
	__int64 v37; // rax
	int v38; // eax
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64 v41; // r8
	unsigned __int64 i; // rax
	unsigned __int64 v43; // r9
	__m128i* v44; // r11
	__int8* v45; // r10
	__int64 v46; // rdx
	__int64 v47; // rcx
	__m128i* v48; // rax
	__int64 v49; // rax
	int v50; // eax
	__int64 v51; // rcx
	__int64 v52; // rax
	__int64 v53; // rax
	int* v54; // rdi
	__int64 v55; // r14
	int* v56; // r14
	__int64 v57; // rax
	bool v58; // zf
	__int64 v59; // rdi
	int* v60; // rdi
	__int64 v61; // rax
	__int64 v62; // r15
	unsigned __int64 v63; // rbx
	__m128i* v64; // rdi
	int* v65; // rax
	__int64 v66; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v68; // [rsp+40h] [rbp-C0h] BYREF
	int* v69; // [rsp+48h] [rbp-B8h]
	__int64 j; // [rsp+58h] [rbp-A8h]
	char v72[8]; // [rsp+60h] [rbp-A0h] BYREF
	int* v73; // [rsp+68h] [rbp-98h]
	__int64 v75; // [rsp+78h] [rbp-88h]
	char v76[8]; // [rsp+80h] [rbp-80h] BYREF
	int* v77; // [rsp+88h] [rbp-78h]
	__int64 v79; // [rsp+98h] [rbp-68h]
	__m128i Buffer; // [rsp+A0h] [rbp-60h] BYREF

	v3 = (__int64)a2;
	v4 = 0i64;
	do
		++v4;
	while (word_1409F3F5C[v4]);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(a1 + 8);
	if (!((v5 - v6) >> 1))
		goto LABEL_13;
	v7 = *(_WORD**)(a1 + 8);
	if (v6 == v5)
	{
	LABEL_10:
		v7 = *(_WORD**)(a1 + 16);
	}
	else
	{
		a2 = (char*)&word_1409F3F5C[v4];
		while (1)
		{
			v8 = word_1409F3F5C;
			if (word_1409F3F5C != (_WORD*)a2)
				break;
		LABEL_9:
			if (++v7 == (_WORD*)v5)
				goto LABEL_10;
		}
		while (*v7 != *v8)
		{
			if (++v8 == (_WORD*)a2)
				goto LABEL_9;
		}
	}
	if (v7 == (_WORD*)v5)
		LABEL_13:
	v9 = -1i64;
	else
		v9 = ((__int64)v7 - v6) >> 1;
	v10 = 0i64;
	do
		++v10;
	while (word_1409F3F7C[v10]);
	v11 = sub_14063F690(a1, (__int64)a2, v5, v10);
	if (v11 == -1 || v9 == v11)
	{
		GetCurrentDirectoryW(0x104u, (LPWSTR)&Buffer);
		v35 = 260i64;
		p_Buffer = &Buffer;
		while (p_Buffer->m128i_i16[0])
		{
			p_Buffer = (__m128i*)((char*)p_Buffer + 2);
			if (!--v35)
				goto LABEL_38;
		}
		sub_14001B680(&Buffer.m128i_i16[260 - v35], v35, v34, (__int64)L"\\autoexec.scs");
	LABEL_38:
		if (sub_1401B5B50(*(__int64*)&qword_140C63788, &Buffer, 1i64, 3, &v66) >= 0)
		{
			v22 = v66;
			v37 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v66 + 24i64))(v66);
			v38 = sub_1401C5690(v37, (int**)&v66, 0);
			v39 = v22;
			v26 = v38 < 0;
			v40 = *(_QWORD*)v22;
			if (!v26)
			{
				v28 = v66;
				if ((*(int(__fastcall**)(__int64, __int64))(v40 + 72))(v22, v66) >= 0)
					goto LABEL_68;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
				v40 = *(_QWORD*)v22;
				v39 = v22;
			}
			(*(void(__fastcall**)(__int64))(v40 + 8))(v39);
		}
		GetCurrentDirectoryW(0x104u, (LPWSTR)&Buffer);
		for (i = 0i64; Buffer.m128i_i16[i]; ++i)
			;
		v43 = 0i64;
		do
			++v43;
		while (word_1409F407C[v43]);
		if (i >= v43)
		{
			v44 = (__m128i*)((char*)&Buffer + 2 * (i - v43));
			if (v44 >= &Buffer)
			{
				v45 = &Buffer.m128i_i8[2 * (i - v43)];
				while (1)
				{
					v46 = 0i64;
					if (!v43)
						break;
					while (1)
					{
						v41 = *(unsigned __int16*)&v45[2 * v46];
						if ((_DWORD)v41 != (unsigned __int16)word_1409F407C[v46])
							break;
						if ((_WORD)v41)
						{
							if (++v46 < v43)
								continue;
						}
						goto LABEL_54;
					}
					v44 = (__m128i*)((char*)v44 - 2);
					v45 -= 2;
					if (v44 < &Buffer)
						goto LABEL_56;
				}
			LABEL_54:
				if (v44)
					v44->m128i_i16[0] = 0;
			}
		}
	LABEL_56:
		v47 = 260i64;
		v48 = &Buffer;
		while (v48->m128i_i16[0])
		{
			v48 = (__m128i*)((char*)v48 + 2);
			if (!--v47)
				goto LABEL_63;
		}
		sub_14001B680(&Buffer.m128i_i16[260 - v47], v47, v41, (__int64)L"\\autoexec.scs");
	LABEL_63:
		if (sub_1401B5B50(*(__int64*)&qword_140C63788, &Buffer, 1i64, 3, &v66) < 0)
			return 0;
		v22 = v66;
		v49 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v66 + 24i64))(v66);
		v50 = sub_1401C5690(v49, (int**)&v66, 0);
		v51 = v22;
		v26 = v50 < 0;
		v52 = *(_QWORD*)v22;
		if (!v26)
		{
			v28 = v66;
			if ((*(int(__fastcall**)(__int64, __int64))(v52 + 72))(v22, v66) >= 0)
				goto LABEL_68;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
			v52 = *(_QWORD*)v22;
			v51 = v22;
		}
		(*(void(__fastcall**)(__int64))(v52 + 8))(v51);
		return 0;
	}
	v12 = *(_QWORD*)(a1 + 8);
	v13 = v11 - 1;
	v14 = (__int64*)&v67;
	v15 = ((*(_QWORD*)(a1 + 16) - v12) >> 1) - (v9 + 1);
	v66 = v11 - 1 - v9;
	v67 = v15;
	if (v15 >= v66)
		v14 = &v66;
	sub_1407DB590(Buffer.m128i_i32, (int*)(v12 + 2 * (v9 + 1)), 2 * *v14);
	v20 = v13;
	if (v20 >= 260)
	{
		_report_rangecheckfailure(v17, v16, v18, v19);
		JUMPOUT(0x14063DF41i64);
	}
	v21 = *(_QWORD*)&qword_140C63788;
	Buffer.m128i_i16[v20] = 0;
	if (sub_1401B5B50(v21, &Buffer, 1i64, 3, &v66) < 0)
		goto LABEL_26;
	v22 = v66;
	v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v66 + 24i64))(v66);
	v24 = sub_1401C5690(v23, (int**)&v66, 0);
	v25 = v22;
	v26 = v24 < 0;
	v27 = *(_QWORD*)v22;
	if (v26)
	{
	LABEL_25:
		(*(void(__fastcall**)(__int64))(v27 + 8))(v25);
	LABEL_26:
		v29 = sub_14018B280(15i64, 0);
		sub_1407DB590(v29, (int*)"File not found", 0xEui64);
		if (v29 != (int*)-14i64)
			*((_BYTE*)v29 + 14) = 0;
		v30 = *(_QWORD*)(v3 + 8);
		v31 = sub_14018B280(48i64, 0);
		v32 = v31;
		if (v31 != (int*)-16i64)
		{
			*((_QWORD*)v31 + 3) = 0i64;
			*((_QWORD*)v31 + 4) = 0i64;
			*((_QWORD*)v31 + 5) = 0i64;
			sub_14001B240((_QWORD*)v31 + 2, v29, (__int64)v29 + 14);
		}
		*(_QWORD*)v32 = v30;
		*((_QWORD*)v32 + 1) = *(_QWORD*)(v30 + 8);
		**(_QWORD**)(v30 + 8) = v32;
		*(_QWORD*)(v30 + 8) = v32;
		if (v29)
			sub_14018B900((__int64)v29, 0);
		return 0;
	}
	v28 = v66;
	if ((*(int(__fastcall**)(__int64, __int64))(v27 + 72))(v22, v66) < 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		v27 = *(_QWORD*)v22;
		v25 = v22;
		goto LABEL_25;
	}
LABEL_68:
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v53 = 0i64;
	v54 = 0i64;
	v69 = 0i64;
	for (j = 0i64; Buffer.m128i_i16[v53]; ++v53)
		;
	v55 = (2 * v53) >> 1;
	if ((unsigned __int64)(v55 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v54 = sub_14018B280(2 * (v55 + 1), 0);
		v69 = v54;
		j = (__int64)v54 + 2 * v55 + 2;
	}
	sub_1407DB590(v54, Buffer.m128i_i32, 2 * v55);
	if ((int*)((char*)v54 + 2 * v55))
		*((_WORD*)v54 + v55) = 0;
	v56 = 0i64;
	v77 = 0i64;
	v79 = 0i64;
	v57 = 0i64;
	do
		v58 = *(_WORD*)&asc_1409F401C[2 * v57++ + 2] == 0;
	while (!v58);
	v59 = (2 * v57) >> 1;
	if ((unsigned __int64)(v59 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v56 = sub_14018B280(2 * (v59 + 1), 0);
		v77 = v56;
		v79 = (__int64)v56 + 2 * v59 + 2;
	}
	sub_1407DB590(v56, (int*)"\\", 2 * v59);
	if ((int*)((char*)v56 + 2 * v59))
		*((_WORD*)v56 + v59) = 0;
	v60 = 0i64;
	v73 = 0i64;
	v75 = 0i64;
	v61 = 0i64;
	do
		v58 = asc_1409F3FFC[++v61] == 0;
	while (!v58);
	v62 = (2 * v61) >> 1;
	if ((unsigned __int64)(v62 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v60 = sub_14018B280(2 * (v62 + 1), 0);
		v73 = v60;
		v75 = (__int64)v60 + 2 * v62 + 2;
	}
	sub_1407DB590(v60, (int*)L"/", 2 * v62);
	if ((int*)((char*)v60 + 2 * v62))
		*((_WORD*)v60 + v62) = 0;
	sub_14018FFE0(&v68, (__int64)v72, (__int64)v76, 0);
	if (v60)
		sub_14018B900((__int64)v60, 0);
	if (v56)
		sub_14018B900((__int64)v56, 0);
	v63 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
	v64 = (__m128i*)sub_14018B280(v63 + 1, 0);
	v65 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 32i64))(v28);
	sub_1407DB590(v64->m128i_i32, v65, v63);
	v64->m128i_i8[v63] = 0;
	sub_14063D680(v64, v3);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
	sub_14018B900((__int64)v64, 0);
	if (v69)
		sub_14018B900((__int64)v69, 0);
	return 1;
}
// 14063DF3C: control flows out of bounds to 14063DF41
// 14063DAEC: conditional instruction was optimized away because rcx.8!=0
// 14063DC48: conditional instruction was optimized away because rcx.8!=0
// 14063DB09: variable 'v34' is possibly undefined
// 14063DC65: variable 'v41' is possibly undefined
// 14063DF3C: variable 'v17' is possibly undefined
// 14063DF3C: variable 'v16' is possibly undefined
// 14063DF3C: variable 'v18' is possibly undefined
// 14063DF3C: variable 'v19' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409F3F5C: using guessed type _WORD word_1409F3F5C[16];
// 1409F3F7C: using guessed type __int16 word_1409F3F7C[];
// 1409F3FFC: using guessed type wchar_t asc_1409F3FFC[2];
// 1409F407C: using guessed type __int16 word_1409F407C[];
// 140B28D38: using guessed type wchar_t aAutoexecScs[14];
// 14063D850: using guessed type __m128i Buffer;
// 14063D850: using guessed type char var_270[8];
// 14063D850: using guessed type char var_290[8];

