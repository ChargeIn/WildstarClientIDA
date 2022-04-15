#include "../winhttp.h"

//----- (00000001401B9710) ----------------------------------------------------
__int64 __fastcall sub_1401B9710(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4)
{
	void(__fastcall * *v4)(__int64, __int64, __int64); // r14
	__int64 v8; // rsi
	unsigned __int64 v9; // r15
	unsigned __int64 v10; // rbx
	int* v11; // r14
	DWORD v12; // r8d
	signed int LastError; // eax
	int v14; // ebx
	int* v15; // rcx
	__int64 v16; // rax
	__int128 v17; // xmm0
	__int128 v18; // xmm1
	__int128 v19; // xmm0
	__int128 v20; // xmm1
	__int128 v21; // xmm0
	__int128 v22; // xmm1
	__int128 v23; // xmm0
	__int128 v24; // xmm1
	unsigned __int64 v25; // rbx
	__int64* v26; // rsi
	DWORD v27; // r8d
	signed int v28; // eax
	LARGE_INTEGER v29; // rsi
	DWORD v30; // ebx
	unsigned __int64 v31; // r12
	__int64 v32; // r9
	unsigned __int64 v33; // r15
	__int64 v34; // r13
	unsigned __int64 v35; // rbx
	unsigned __int64* v36; // r14
	unsigned __int64 v37; // rdx
	unsigned __int64 v38; // rcx
	void* v39; // rcx
	__int64 v40; // rdx
	unsigned __int64* v41; // rsi
	DWORD v42; // r8d
	signed int v43; // eax
	unsigned __int64 v44; // rbx
	__int64* v45; // rsi
	DWORD v46; // r8d
	signed int v47; // eax
	unsigned __int64 v48; // rbx
	__int64* v49; // rsi
	DWORD v50; // r8d
	signed int v51; // eax
	unsigned __int64 v52; // rax
	__int64 v53; // r9
	bool v54; // zf
	unsigned __int64 v55; // r12
	_QWORD* v56; // r14
	void* v57; // rcx
	LONGLONG v58; // r15
	unsigned __int64 v59; // rbx
	unsigned __int64* v60; // rsi
	DWORD v61; // r8d
	signed int v62; // eax
	unsigned __int64 v63; // rbx
	unsigned __int64* v64; // rsi
	DWORD v65; // r8d
	signed int v66; // eax
	__int64 v67; // rax
	DWORD* v68; // rbx
	DWORD v69; // r8d
	signed int v70; // eax
	bool v71; // sf
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-D0h] BYREF
	DWORD v73; // [rsp+34h] [rbp-CCh] BYREF
	DWORD v74; // [rsp+38h] [rbp-C8h] BYREF
	DWORD v75[2]; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v76; // [rsp+48h] [rbp-B8h] BYREF
	unsigned __int64 v77; // [rsp+50h] [rbp-B0h]
	__int64 v78; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v79; // [rsp+60h] [rbp-A0h] BYREF
	void(__fastcall * *v80)(__int64, __int64, __int64); // [rsp+68h] [rbp-98h]
	unsigned __int64 v81; // [rsp+70h] [rbp-90h] BYREF
	unsigned __int64 v82; // [rsp+78h] [rbp-88h] BYREF
	LARGE_INTEGER v83; // [rsp+80h] [rbp-80h]
	__int64 v84; // [rsp+88h] [rbp-78h] BYREF
	unsigned __int64 v85; // [rsp+90h] [rbp-70h] BYREF
	__int64 v86; // [rsp+98h] [rbp-68h]
	_DWORD* v87; // [rsp+A0h] [rbp-60h]
	__int64 v88; // [rsp+A8h] [rbp-58h]
	__int64 v89; // [rsp+B0h] [rbp-50h] BYREF
	int Buffer[128]; // [rsp+C0h] [rbp-40h] BYREF

	v4 = (void(__fastcall**)(__int64, __int64, __int64))a3;
	v80 = (void(__fastcall**)(__int64, __int64, __int64))a3;
	v87 = a2;
	v88 = a4;
	sub_1400035B0();
	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	sub_1407E4830(Buffer, 0i64, 0x200ui64);
	v8 = a1 + 64;
	v84 = 0i64;
	v9 = 8i64;
	if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 64), (__int64)Buffer, 0x200ui64))
	{
		v10 = 512i64;
		v11 = Buffer;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)8i64, 0i64, 0))
		{
			while (1)
			{
				v12 = 0x80000000;
				if (v10 < 0x80000000)
					v12 = v10;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v11, v12, &NumberOfBytesWritten, 0i64))
					break;
				v11 = (int*)((char*)v11 + NumberOfBytesWritten);
				v10 -= NumberOfBytesWritten;
				if (!v10)
					goto LABEL_13;
			}
		}
		LastError = GetLastError();
		v14 = LastError;
		if (LastError > 0)
			v14 = (unsigned __int16)LastError | 0x80070000;
		if (v14 < 0)
			goto LABEL_141;
	LABEL_13:
		v15 = Buffer;
		if ((((unsigned __int8)v8 | (unsigned __int8)Buffer) & 0xF) != 0)
		{
			sub_1407DB590((int*)(a1 + 64), Buffer, 0x200ui64);
		}
		else
		{
			v16 = 4i64;
			do
			{
				v17 = *(_OWORD*)v15;
				v18 = *((_OWORD*)v15 + 1);
				v8 += 128i64;
				v15 += 32;
				*(_OWORD*)(v8 - 128) = v17;
				v19 = *((_OWORD*)v15 - 6);
				*(_OWORD*)(v8 - 112) = v18;
				v20 = *((_OWORD*)v15 - 5);
				*(_OWORD*)(v8 - 96) = v19;
				v21 = *((_OWORD*)v15 - 4);
				*(_OWORD*)(v8 - 80) = v20;
				v22 = *((_OWORD*)v15 - 3);
				*(_OWORD*)(v8 - 64) = v21;
				v23 = *((_OWORD*)v15 - 2);
				*(_OWORD*)(v8 - 48) = v22;
				v24 = *((_OWORD*)v15 - 1);
				*(_OWORD*)(v8 - 32) = v23;
				*(_OWORD*)(v8 - 16) = v24;
				--v16;
			} while (v16);
		}
		v4 = v80;
	}
	if (*(_QWORD*)(a1 + 584) != v84)
	{
		v25 = 8i64;
		v26 = &v84;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)528i64, 0i64, 0))
		{
			while (1)
			{
				v27 = 0x80000000;
				if (v25 < 0x80000000)
					v27 = v25;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v26, v27, &NumberOfBytesWritten, 0i64))
					break;
				v26 = (__int64*)((char*)v26 + NumberOfBytesWritten);
				v25 -= NumberOfBytesWritten;
				if (!v25)
					goto LABEL_29;
			}
		}
		v28 = GetLastError();
		v14 = v28;
		if (v28 > 0)
			v14 = (unsigned __int16)v28 | 0x80070000;
		if (v14 < 0)
			goto LABEL_141;
	LABEL_29:
		*(_QWORD*)(a1 + 584) = v84;
	}
	sub_140008410(a1 + 632);
	*(_DWORD*)(a1 + 664) = 1;
	if (v4 && *v4)
		(*v4)(0i64, 16i64 * *(_QWORD*)(a1 + 624), a4);
	v29.QuadPart = 576i64;
	v30 = 0;
	v83.QuadPart = 576i64;
	v73 = 0;
	if (*(_QWORD*)(a1 + 624))
	{
		**(_QWORD**)(a1 + 616) = *(_QWORD*)(a1 + 592);
		v31 = 576i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 616) + 8i64) = 16i64 * *(_QWORD*)(a1 + 624);
		v32 = *(_QWORD*)(a1 + 616);
		v86 = *(_QWORD*)(a1 + 624);
		v79 = 0i64;
		v85 = 0i64;
		sub_1401D3110(&v76, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401BC7B0, &v85, v32, 2);
		v33 = 0i64;
		v34 = v78;
		if (*(_QWORD*)(a1 + 624))
		{
			while (*v87)
			{
				v35 = 8i64;
				if (v4 && *v4)
					(*v4)(8i64, 0i64, v88);
				v82 = *(_QWORD*)(v34 + 8 * v33);
				v36 = (unsigned __int64*)(*(_QWORD*)(a1 + 616) + 16 * v82);
				if (!v36[1])
					goto LABEL_61;
				v37 = *v36;
				if ((*v36 & 0xF) != 0
					|| v37 < 0x240
					|| v37 + 24 > *(_QWORD*)(a1 + 576)
					|| sub_1401BC1A0(a1, (LARGE_INTEGER)(v37 - 8), (int*)&v81, 8ui64) < 0
					|| v81 < v36[1]
					|| sub_1401BC1A0(a1, (LARGE_INTEGER)(v81 + *v36), (int*)&v89, 8ui64) < 0
					|| v81 != v89
					|| (v38 = *v36, *v36 < v31)
					|| v38 - v31 - 1 <= 0x1E)
				{
					v39 = *(void**)(a1 + 32);
					v40 = *(_QWORD*)(a1 + 592) - *(_QWORD*)(a1 + 616);
					v85 = 0i64;
					v41 = &v85;
					if (SetFilePointerEx(v39, (LARGE_INTEGER)((char*)v36 + v40 + 8), 0i64, 0))
					{
						while (1)
						{
							v42 = 0x80000000;
							if (v35 < 0x80000000)
								v42 = v35;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v41, v42, &NumberOfBytesWritten, 0i64))
								break;
							v41 = (unsigned __int64*)((char*)v41 + NumberOfBytesWritten);
							v35 -= NumberOfBytesWritten;
							if (!v35)
								goto LABEL_59;
						}
					}
					v43 = GetLastError();
					v14 = v43;
					if (v43 > 0)
						v14 = (unsigned __int16)v43 | 0x80070000;
					if (v14 < 0)
						goto LABEL_89;
				LABEL_59:
					v36[1] = 0i64;
				}
				else
				{
					v31 = v38 + v81 + 16;
				}
				if (!v36[1])
				{
				LABEL_61:
					v44 = 8i64;
					v45 = (__int64*)&v79;
					if (SetFilePointerEx(
						*(HANDLE*)(a1 + 32),
						(LARGE_INTEGER)((char*)v36 + *(_QWORD*)(a1 + 592) - *(_QWORD*)(a1 + 616)),
						0i64,
						0))
					{
						while (1)
						{
							v46 = 0x80000000;
							if (v44 < 0x80000000)
								v46 = v44;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v45, v46, v75, 0i64))
								break;
							v45 = (__int64*)((char*)v45 + v75[0]);
							v44 -= v75[0];
							if (!v44)
								goto LABEL_70;
						}
					}
					v47 = GetLastError();
					v14 = v47;
					if (v47 > 0)
						v14 = (unsigned __int16)v47 | 0x80070000;
					if (v14 < 0)
						goto LABEL_89;
				LABEL_70:
					*v36 = v79;
					if (*(_DWORD*)(a1 + 604) != (_DWORD)v82)
					{
						v48 = 4i64;
						v49 = (__int64*)&v82;
						if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)548i64, 0i64, 0))
						{
							while (1)
							{
								v50 = 0x80000000;
								if (v48 < 0x80000000)
									v50 = v48;
								if (!WriteFile(*(HANDLE*)(a1 + 32), v49, v50, &v74, 0i64))
									break;
								v49 = (__int64*)((char*)v49 + v74);
								v48 -= v74;
								if (!v48)
									goto LABEL_80;
							}
						}
						v51 = GetLastError();
						v14 = v51;
						if (v51 > 0)
							v14 = (unsigned __int16)v51 | 0x80070000;
						if (v14 < 0)
							goto LABEL_89;
					LABEL_80:
						*(_DWORD*)(a1 + 604) = v82;
					}
					v79 = v82;
				}
				v4 = v80;
				++v33;
				v29.QuadPart = 576i64;
				if (v33 >= *(_QWORD*)(a1 + 624))
				{
					v30 = v73;
					goto LABEL_84;
				}
			}
			goto LABEL_88;
		}
	LABEL_84:
		v52 = *(unsigned int*)(a1 + 608);
		if ((_DWORD)v52
			&& (v52 >= *(_QWORD*)(a1 + 624) || !*(_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * (unsigned int)v52 + 8)))
		{
			v30 = 1;
		}
		if (!*(_QWORD*)(*(_QWORD*)(a1 + 616) + 8i64))
			v30 = 1;
		if (v76 < v77)
			sub_14018B900(v34 + 8 * v76, 0);
		if (v30)
		{
			sub_1400035B0();
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
			goto LABEL_141;
		}
		v9 = 8i64;
	}
	sub_1400035B0();
	v53 = *(_QWORD*)(a1 + 616);
	v86 = *(_QWORD*)(a1 + 624);
	v85 = 0i64;
	sub_1401D3110(&v76, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401BC7B0, &v85, v53, 2);
	v54 = *(_QWORD*)(a1 + 624) == 0i64;
	v55 = 0i64;
	v34 = v78;
	*(_QWORD*)v75 = 576i64;
	if (!v54)
	{
		while (*v87)
		{
			if (v4 && *v4)
				(*v4)(8i64, 0i64, v88);
			v56 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * *(_QWORD*)(v34 + 8 * v55));
			if (!v56[1])
				goto LABEL_127;
			if (*v56 > v29.QuadPart)
			{
				v57 = *(void**)(a1 + 32);
				v58 = *v56 - v29.QuadPart;
				v59 = 8i64;
				v81 = 16 - v58;
				v60 = &v81;
				if (SetFilePointerEx(v57, (LARGE_INTEGER)(v83.QuadPart - 8), 0i64, 0))
				{
					while (1)
					{
						v61 = 0x80000000;
						if (v59 < 0x80000000)
							v61 = v59;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v60, v61, &v73, 0i64))
							break;
						v60 = (unsigned __int64*)((char*)v60 + v73);
						v59 -= v73;
						if (!v59)
							goto LABEL_114;
					}
				}
				v62 = GetLastError();
				v14 = v62;
				if (v62 > 0)
					v14 = (unsigned __int16)v62 | 0x80070000;
				if (v14 < 0)
					goto LABEL_89;
			LABEL_114:
				v63 = 8i64;
				v64 = &v81;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(*v56 - 16i64), 0i64, 0))
				{
					while (1)
					{
						v65 = 0x80000000;
						if (v63 < 0x80000000)
							v65 = v63;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v64, v65, &v74, 0i64))
							break;
						v64 = (unsigned __int64*)((char*)v64 + v74);
						v63 -= v74;
						if (!v63)
							goto LABEL_123;
					}
				}
				v66 = GetLastError();
				v14 = v66;
				if (v66 > 0)
					v14 = (unsigned __int16)v66 | 0x80070000;
				if (v14 < 0)
					goto LABEL_89;
			LABEL_123:
				sub_1401BBAB0(a1, v83, v58 - 16);
			}
			v79 = 0i64;
			v9 = 8i64;
			v14 = sub_1401BC1A0(a1, (LARGE_INTEGER)(*v56 - 8i64), (int*)&v79, 8ui64);
			if (v14 < 0)
				goto LABEL_89;
			++v55;
			v29.QuadPart = *v56 + v79 + 16;
			v67 = *v56 + v79 + 8;
			v83 = v29;
			*(_QWORD*)v75 = v67;
			if (v55 >= *(_QWORD*)(a1 + 624))
				goto LABEL_127;
			v4 = v80;
		}
	LABEL_88:
		v14 = 1;
	LABEL_89:
		if (v76 < v77)
			sub_14018B900(v34 + 8 * v76, 0);
		goto LABEL_141;
	}
LABEL_127:
	if (*(_QWORD*)(a1 + 576) != *(_QWORD*)v75)
	{
		v68 = v75;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)520i64, 0i64, 0))
		{
			while (1)
			{
				v69 = 0x80000000;
				if (v9 < 0x80000000)
					v69 = v9;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v68, v69, &v73, 0i64))
					break;
				v68 = (DWORD*)((char*)v68 + v73);
				v9 -= v73;
				if (!v9)
					goto LABEL_137;
			}
		}
		v70 = GetLastError();
		v71 = v70 < 0;
		if (v70 > 0)
			v71 = 1;
		if (!v71)
			LABEL_137:
		*(_QWORD*)(a1 + 576) = *(_QWORD*)v75;
	}
	SetFilePointerEx(*(HANDLE*)(a1 + 32), *(LARGE_INTEGER*)v75, 0i64, 0);
	SetEndOfFile(*(HANDLE*)(a1 + 32));
	if (v76 < v77)
		sub_14018B900(v34 + 8 * v76, 0);
	sub_1400035B0();
	v14 = 0;
LABEL_141:
	if (*(_QWORD*)(a1 + 624))
	{
		**(_QWORD**)(a1 + 616) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 616) + 8i64) = 0i64;
	}
	return (unsigned int)v14;
}
// 1401B9710: using guessed type int Buffer[128];

