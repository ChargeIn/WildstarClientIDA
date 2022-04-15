//----- (00000001401B89B0) ----------------------------------------------------
__int64 __fastcall sub_1401B89B0(__int64 a1)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // r13
	unsigned __int64 v5; // r12
	unsigned __int64 v6; // rbx
	int* v7; // r14
	DWORD v8; // r8d
	signed int LastError; // eax
	int v10; // ebx
	int* v11; // rcx
	__int64 v12; // rax
	__int128 v13; // xmm0
	__int128 v14; // xmm1
	__int128 v15; // xmm0
	__int128 v16; // xmm1
	__int128 v17; // xmm0
	__int128 v18; // xmm1
	__int128 v19; // xmm0
	__int128 v20; // xmm1
	unsigned __int64 v21; // rbx
	__int64* v22; // rsi
	DWORD v23; // r8d
	signed int v24; // eax
	bool v25; // zf
	__int64* v26; // r14
	__int64 v27; // r15
	unsigned __int64 v28; // rax
	unsigned __int64* v29; // r14
	unsigned __int64 v30; // rdx
	unsigned __int64 v31; // rbx
	__int64* v32; // rsi
	DWORD v33; // r8d
	signed int v34; // eax
	unsigned __int64 v35; // rax
	unsigned __int64 v36; // rbx
	unsigned __int64* v37; // rsi
	DWORD v38; // r8d
	signed int v39; // eax
	unsigned __int64 v40; // rbx
	DWORD* v41; // rsi
	DWORD v42; // r8d
	signed int v43; // eax
	unsigned __int64 v44; // rax
	unsigned __int64 v45; // rbx
	__int64* v46; // rsi
	DWORD v47; // r8d
	signed int v48; // eax
	unsigned __int64 v49; // rax
	__int64 v50; // r9
	__int64 v51; // r13
	unsigned __int64 i; // r12
	__int64 v53; // r15
	LARGE_INTEGER* v54; // r14
	LARGE_INTEGER v55; // rax
	void* v56; // rcx
	unsigned __int64 v57; // rbx
	unsigned __int64* v58; // rsi
	DWORD v59; // r8d
	signed int v60; // eax
	LONGLONG QuadPart; // rdx
	unsigned __int64 v62; // rcx
	unsigned __int64 v63; // rax
	void* v64; // rcx
	unsigned __int64 v65; // rbx
	unsigned __int64* v66; // rsi
	DWORD v67; // r8d
	signed int v68; // eax
	unsigned __int64 v69; // rax
	unsigned __int64 v70; // rbx
	unsigned __int64* v71; // rsi
	DWORD v72; // r8d
	signed int v73; // eax
	unsigned __int64 v74; // rbx
	unsigned __int64* v75; // rsi
	DWORD v76; // r8d
	signed int v77; // eax
	LARGE_INTEGER* p_liDistanceToMove; // rbx
	DWORD v79; // r8d
	unsigned __int64 v80; // rbx
	__int64* v81; // rsi
	DWORD v82; // r8d
	signed int v83; // eax
	unsigned __int64 v84; // rbx
	__int64* v85; // rsi
	DWORD v86; // r8d
	signed int v87; // eax
	unsigned __int64 v88; // rbx
	__int64* v89; // rsi
	DWORD v90; // r8d
	signed int v91; // eax
	DWORD v92; // r8d
	signed int v93; // eax
	signed int v94; // eax
	DWORD v95[2]; // [rsp+30h] [rbp-D0h] BYREF
	DWORD NumberOfBytesWritten; // [rsp+38h] [rbp-C8h] BYREF
	LARGE_INTEGER liDistanceToMove; // [rsp+40h] [rbp-C0h] BYREF
	DWORD v98; // [rsp+48h] [rbp-B8h] BYREF
	unsigned __int64 v99; // [rsp+50h] [rbp-B0h] BYREF
	unsigned __int64 v100; // [rsp+58h] [rbp-A8h] BYREF
	DWORD v101; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v102; // [rsp+68h] [rbp-98h] BYREF
	unsigned __int64 v103; // [rsp+70h] [rbp-90h]
	__int64 v104; // [rsp+78h] [rbp-88h]
	__int64 v105; // [rsp+80h] [rbp-80h] BYREF
	unsigned __int64 v106[3]; // [rsp+88h] [rbp-78h] BYREF
	int Buffer[128]; // [rsp+A0h] [rbp-60h] BYREF

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	sub_1407E4830(Buffer, 0i64, 0x200ui64);
	v3 = a1 + 64;
	v105 = 0i64;
	v4 = 8i64;
	v5 = 4i64;
	if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 64), (__int64)Buffer, 0x200ui64))
	{
		v6 = 512i64;
		v7 = Buffer;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)8i64, 0i64, 0))
		{
			while (1)
			{
				v8 = 0x80000000;
				if (v6 < 0x80000000)
					v8 = v6;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v7, v8, &NumberOfBytesWritten, 0i64))
					break;
				v7 = (int*)((char*)v7 + NumberOfBytesWritten);
				v6 -= NumberOfBytesWritten;
				if (!v6)
					goto LABEL_13;
			}
		}
		LastError = GetLastError();
		v10 = LastError;
		if (LastError > 0)
			v10 = (unsigned __int16)LastError | 0x80070000;
		if (v10 < 0)
			goto LABEL_202;
	LABEL_13:
		v11 = Buffer;
		if ((((unsigned __int8)v3 | (unsigned __int8)Buffer) & 0xF) != 0)
		{
			sub_1407DB590((int*)(a1 + 64), Buffer, 0x200ui64);
		}
		else
		{
			v12 = 4i64;
			do
			{
				v13 = *(_OWORD*)v11;
				v14 = *((_OWORD*)v11 + 1);
				v3 += 128i64;
				v11 += 32;
				*(_OWORD*)(v3 - 128) = v13;
				v15 = *((_OWORD*)v11 - 6);
				*(_OWORD*)(v3 - 112) = v14;
				v16 = *((_OWORD*)v11 - 5);
				*(_OWORD*)(v3 - 96) = v15;
				v17 = *((_OWORD*)v11 - 4);
				*(_OWORD*)(v3 - 80) = v16;
				v18 = *((_OWORD*)v11 - 3);
				*(_OWORD*)(v3 - 64) = v17;
				v19 = *((_OWORD*)v11 - 2);
				*(_OWORD*)(v3 - 48) = v18;
				v20 = *((_OWORD*)v11 - 1);
				*(_OWORD*)(v3 - 32) = v19;
				*(_OWORD*)(v3 - 16) = v20;
				--v12;
			} while (v12);
		}
	}
	if (*(_QWORD*)(a1 + 584) != v105)
	{
		v21 = 8i64;
		v22 = &v105;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)528i64, 0i64, 0))
		{
			while (1)
			{
				v23 = 0x80000000;
				if (v21 < 0x80000000)
					v23 = v21;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v22, v23, &NumberOfBytesWritten, 0i64))
					break;
				v22 = (__int64*)((char*)v22 + NumberOfBytesWritten);
				v21 -= NumberOfBytesWritten;
				if (!v21)
					goto LABEL_28;
			}
		}
		v24 = GetLastError();
		v10 = v24;
		if (v24 > 0)
			v10 = (unsigned __int16)v24 | 0x80070000;
		if (v10 < 0)
			goto LABEL_202;
	LABEL_28:
		*(_QWORD*)(a1 + 584) = v105;
	}
	sub_140008410(a1 + 632);
	v25 = *(_QWORD*)(a1 + 624) == 0i64;
	*(_DWORD*)(a1 + 664) = 1;
	v26 = &qword_140B720B8;
	if (!v25)
	{
		v27 = a1 + 616;
		**(_QWORD**)(a1 + 616) = *(_QWORD*)(a1 + 592);
		*(_QWORD*)(*(_QWORD*)(a1 + 616) + 8i64) = 16i64 * *(_QWORD*)(a1 + 624);
		v28 = 0i64;
		v100 = 0i64;
		*(_QWORD*)v95 = 0i64;
		if (*(_QWORD*)(a1 + 624))
		{
			do
			{
				v29 = (unsigned __int64*)(*(_QWORD*)v27 + 16 * v28);
				if (!v29[1])
					goto LABEL_50;
				v30 = *v29;
				if ((*v29 & 0xF) != 0
					|| v30 < 0x240
					|| v30 + 24 > *(_QWORD*)(a1 + 576)
					|| sub_1401BC1A0(a1, (LARGE_INTEGER)(v30 - 8), (int*)&v99, 8ui64) < 0
					|| v99 < v29[1]
					|| sub_1401BC1A0(a1, (LARGE_INTEGER)(v99 + *v29), (int*)v106, 8ui64) < 0
					|| v99 != v106[0])
				{
					v31 = 8i64;
					v32 = &qword_140B720B8;
					if (SetFilePointerEx(
						*(HANDLE*)(a1 + 32),
						(LARGE_INTEGER)((char*)v29 + *(_QWORD*)(a1 + 592) - *(_QWORD*)v27 + 8),
						0i64,
						0))
					{
						while (1)
						{
							v33 = 0x80000000;
							if (v31 < 0x80000000)
								v33 = v31;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v32, v33, &NumberOfBytesWritten, 0i64))
								break;
							v32 = (__int64*)((char*)v32 + NumberOfBytesWritten);
							v31 -= NumberOfBytesWritten;
							if (!v31)
								goto LABEL_48;
						}
					}
					v34 = GetLastError();
					v10 = v34;
					if (v34 > 0)
						v10 = (unsigned __int16)v34 | 0x80070000;
					if (v10 < 0)
						goto LABEL_202;
				LABEL_48:
					v29[1] = 0i64;
				}
				v35 = *(_QWORD*)v95;
				if (!v29[1])
				{
				LABEL_50:
					v36 = 8i64;
					v37 = &v100;
					if (SetFilePointerEx(
						*(HANDLE*)(a1 + 32),
						(LARGE_INTEGER)((char*)v29 + *(_QWORD*)(a1 + 592) - *(_QWORD*)v27),
						0i64,
						0))
					{
						while (1)
						{
							v38 = 0x80000000;
							if (v36 < 0x80000000)
								v38 = v36;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v37, v38, &v101, 0i64))
								break;
							v37 = (unsigned __int64*)((char*)v37 + v101);
							v36 -= v101;
							if (!v36)
								goto LABEL_59;
						}
					}
					v39 = GetLastError();
					v10 = v39;
					if (v39 > 0)
						v10 = (unsigned __int16)v39 | 0x80070000;
					if (v10 < 0)
						goto LABEL_202;
				LABEL_59:
					*v29 = v100;
					if (*(_DWORD*)(a1 + 604) != v95[0])
					{
						v40 = 4i64;
						v41 = v95;
						if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)548i64, 0i64, 0))
						{
							while (1)
							{
								v42 = 0x80000000;
								if (v40 < 0x80000000)
									v42 = v40;
								if (!WriteFile(*(HANDLE*)(a1 + 32), v41, v42, &v98, 0i64))
									break;
								v41 = (DWORD*)((char*)v41 + v98);
								v40 -= v98;
								if (!v40)
									goto LABEL_69;
							}
						}
						v43 = GetLastError();
						v10 = v43;
						if (v43 > 0)
							v10 = (unsigned __int16)v43 | 0x80070000;
						if (v10 < 0)
							goto LABEL_202;
					LABEL_69:
						*(_DWORD*)(a1 + 604) = v95[0];
					}
					v35 = *(_QWORD*)v95;
					v100 = *(_QWORD*)v95;
				}
				v28 = v35 + 1;
				*(_QWORD*)v95 = v28;
			} while (v28 < *(_QWORD*)(a1 + 624));
			v26 = &qword_140B720B8;
		}
		v44 = *(unsigned int*)(a1 + 608);
		if ((_DWORD)v44
			&& (v44 >= *(_QWORD*)(a1 + 624) || !*(_QWORD*)(*(_QWORD*)v27 + 16i64 * (unsigned int)v44 + 8))
			&& *(_DWORD*)(a1 + 608))
		{
			v45 = 4i64;
			v46 = &qword_140B720B8;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)552i64, 0i64, 0))
			{
				while (1)
				{
					v47 = 0x80000000;
					if (v45 < 0x80000000)
						v47 = v45;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v46, v47, &v98, 0i64))
						break;
					v46 = (__int64*)((char*)v46 + v98);
					v45 -= v98;
					if (!v45)
						goto LABEL_86;
				}
			}
			v48 = GetLastError();
			v10 = v48;
			if (v48 > 0)
				v10 = (unsigned __int16)v48 | 0x80070000;
			if (v10 < 0)
				goto LABEL_202;
		LABEL_86:
			*(_DWORD*)(a1 + 608) = 0;
		}
		if (!*(_QWORD*)(*(_QWORD*)v27 + 8i64))
			sub_1401BC800((__int64*)(a1 + 616), 0i64);
	}
	v49 = *(_QWORD*)(a1 + 624);
	liDistanceToMove.QuadPart = 568i64;
	if (v49)
	{
		v50 = *(_QWORD*)(a1 + 616);
		v106[0] = 0i64;
		v106[1] = v49;
		sub_1401D3110(&v102, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401BC7B0, v106, v50, 2);
		v51 = v104;
		for (i = 0i64; i < *(_QWORD*)(a1 + 624); ++i)
		{
			v53 = *(_QWORD*)(v51 + 8 * i);
			v54 = (LARGE_INTEGER*)(*(_QWORD*)(a1 + 616) + 16 * v53);
			v55 = v54[1];
			if (!v55.QuadPart)
				break;
			v56 = *(void**)(a1 + 32);
			v57 = 8i64;
			v58 = &v100;
			v100 = (v55.QuadPart + 15) & 0xFFFFFFFFFFFFFFF0ui64;
			if (SetFilePointerEx(v56, liDistanceToMove, 0i64, 0))
			{
				while (1)
				{
					v59 = 0x80000000;
					if (v57 < 0x80000000)
						v59 = v57;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v58, v59, &v98, 0i64))
						break;
					v58 = (unsigned __int64*)((char*)v58 + v98);
					v57 -= v98;
					if (!v57)
						goto LABEL_101;
				}
			}
			v60 = GetLastError();
			v10 = v60;
			if (v60 > 0)
				v10 = (unsigned __int16)v60 | 0x80070000;
			if (v10 < 0)
				goto LABEL_151;
		LABEL_101:
			QuadPart = liDistanceToMove.QuadPart + 8;
			liDistanceToMove.QuadPart = QuadPart;
			v99 = QuadPart;
			if (QuadPart != v54->QuadPart)
			{
				v10 = sub_1401BC640(a1, (LARGE_INTEGER)QuadPart, *v54, v54[1].QuadPart);
				if (v10 < 0)
					goto LABEL_151;
				QuadPart = liDistanceToMove.QuadPart;
			}
			v62 = v54[1].QuadPart;
			v63 = v100;
			if (v100 > v62)
			{
				v10 = sub_1401BC4C0(a1, (LARGE_INTEGER)(v62 + QuadPart), (char*)&qword_140B720B8, v100 - v62);
				if (v10 < 0)
					goto LABEL_151;
				QuadPart = liDistanceToMove.QuadPart;
				v63 = v100;
			}
			v64 = *(void**)(a1 + 32);
			v65 = 8i64;
			v66 = &v100;
			liDistanceToMove.QuadPart = v63 + QuadPart;
			if (SetFilePointerEx(v64, (LARGE_INTEGER)(v63 + QuadPart), 0i64, 0))
			{
				while (1)
				{
					v67 = 0x80000000;
					if (v65 < 0x80000000)
						v67 = v65;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v66, v67, &v101, 0i64))
						break;
					v66 = (unsigned __int64*)((char*)v66 + v101);
					v65 -= v101;
					if (!v65)
						goto LABEL_116;
				}
			}
			v68 = GetLastError();
			v10 = v68;
			if (v68 > 0)
				v10 = (unsigned __int16)v68 | 0x80070000;
			if (v10 < 0)
			{
			LABEL_151:
				if (v102 < v103)
					sub_14018B900(v51 + 8 * v102, 0);
				goto LABEL_202;
			}
		LABEL_116:
			v69 = v99;
			liDistanceToMove.QuadPart += 8i64;
			if (v99 != v54->QuadPart)
			{
				if (v53)
				{
					v70 = 8i64;
					v71 = &v99;
					if (SetFilePointerEx(
						*(HANDLE*)(a1 + 32),
						(LARGE_INTEGER)((char*)v54 + *(_QWORD*)(a1 + 592) - *(_QWORD*)(a1 + 616)),
						0i64,
						0))
					{
						while (1)
						{
							v72 = 0x80000000;
							if (v70 < 0x80000000)
								v72 = v70;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v71, v72, &NumberOfBytesWritten, 0i64))
								break;
							v71 = (unsigned __int64*)((char*)v71 + NumberOfBytesWritten);
							v70 -= NumberOfBytesWritten;
							if (!v70)
							{
								v69 = v99;
								goto LABEL_139;
							}
						}
					}
					v73 = GetLastError();
					v10 = v73;
					if (v73 > 0)
						v10 = (unsigned __int16)v73 | 0x80070000;
					if (v10 < 0)
						goto LABEL_151;
					v69 = v99;
				}
				else if (*(_QWORD*)(a1 + 592) != v99)
				{
					v74 = 8i64;
					v75 = &v99;
					if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)536i64, 0i64, 0))
					{
						while (1)
						{
							v76 = 0x80000000;
							if (v74 < 0x80000000)
								v76 = v74;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v75, v76, v95, 0i64))
								break;
							v75 = (unsigned __int64*)((char*)v75 + v95[0]);
							v74 -= v95[0];
							if (!v74)
								goto LABEL_138;
						}
					}
					v77 = GetLastError();
					v10 = v77;
					if (v77 > 0)
						v10 = (unsigned __int16)v77 | 0x80070000;
					if (v10 < 0)
						goto LABEL_151;
				LABEL_138:
					v69 = v99;
					*(_QWORD*)(a1 + 592) = v99;
				}
			LABEL_139:
				v54->QuadPart = v69;
			}
		}
		if (v102 < v103)
			sub_14018B900(v51 + 8 * v102, 0);
		v4 = 8i64;
	}
	else
	{
		if (*(_QWORD*)(a1 + 592))
		{
			v80 = 8i64;
			v81 = &qword_140B720B8;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)536i64, 0i64, 0))
			{
				while (1)
				{
					v82 = 0x80000000;
					if (v80 < 0x80000000)
						v82 = v80;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v81, v82, v95, 0i64))
						break;
					v81 = (__int64*)((char*)v81 + v95[0]);
					v80 -= v95[0];
					if (!v80)
						goto LABEL_163;
				}
			}
			v83 = GetLastError();
			v10 = v83;
			if (v83 > 0)
				v10 = (unsigned __int16)v83 | 0x80070000;
			if (v10 < 0)
				goto LABEL_202;
		LABEL_163:
			*(_QWORD*)(a1 + 592) = 0i64;
		}
		if (*(_DWORD*)(a1 + 600))
		{
			v84 = 4i64;
			v85 = &qword_140B720B8;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)544i64, 0i64, 0))
			{
				while (1)
				{
					v86 = 0x80000000;
					if (v84 < 0x80000000)
						v86 = v84;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v85, v86, v95, 0i64))
						break;
					v85 = (__int64*)((char*)v85 + v95[0]);
					v84 -= v95[0];
					if (!v84)
						goto LABEL_174;
				}
			}
			v87 = GetLastError();
			v10 = v87;
			if (v87 > 0)
				v10 = (unsigned __int16)v87 | 0x80070000;
			if (v10 < 0)
				goto LABEL_202;
		LABEL_174:
			*(_DWORD*)(a1 + 600) = 0;
		}
		if (*(_DWORD*)(a1 + 604))
		{
			v88 = 4i64;
			v89 = &qword_140B720B8;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)548i64, 0i64, 0))
			{
				while (1)
				{
					v90 = 0x80000000;
					if (v88 < 0x80000000)
						v90 = v88;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v89, v90, v95, 0i64))
						break;
					v89 = (__int64*)((char*)v89 + v95[0]);
					v88 -= v95[0];
					if (!v88)
						goto LABEL_185;
				}
			}
			v91 = GetLastError();
			v10 = v91;
			if (v91 > 0)
				v10 = (unsigned __int16)v91 | 0x80070000;
			if (v10 < 0)
				goto LABEL_202;
		LABEL_185:
			*(_DWORD*)(a1 + 604) = 0;
		}
		if (*(_DWORD*)(a1 + 608))
		{
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)552i64, 0i64, 0))
			{
				while (1)
				{
					v92 = 0x80000000;
					if (v5 < 0x80000000)
						v92 = v5;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v26, v92, v95, 0i64))
						break;
					v26 = (__int64*)((char*)v26 + v95[0]);
					v5 -= v95[0];
					if (!v5)
					{
						*(_DWORD*)(a1 + 608) = 0;
						goto LABEL_144;
					}
				}
			}
			v93 = GetLastError();
			v10 = v93;
			if (v93 > 0)
				v10 = (unsigned __int16)v93 | 0x80070000;
			if (v10 < 0)
				goto LABEL_202;
			*(_DWORD*)(a1 + 608) = 0;
		}
	}
LABEL_144:
	if (*(_QWORD*)(a1 + 576) != liDistanceToMove.QuadPart)
	{
		p_liDistanceToMove = &liDistanceToMove;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)520i64, 0i64, 0))
		{
			while (1)
			{
				v79 = 0x80000000;
				if (v4 < 0x80000000)
					v79 = v4;
				if (!WriteFile(*(HANDLE*)(a1 + 32), p_liDistanceToMove, v79, v95, 0i64))
					break;
				p_liDistanceToMove = (LARGE_INTEGER*)((char*)p_liDistanceToMove + v95[0]);
				v4 -= v95[0];
				if (!v4)
					goto LABEL_200;
			}
		}
		v94 = GetLastError();
		v10 = v94;
		if (v94 > 0)
			v10 = (unsigned __int16)v94 | 0x80070000;
		if (v10 < 0)
			goto LABEL_202;
	LABEL_200:
		*(LARGE_INTEGER*)(a1 + 576) = liDistanceToMove;
	}
	SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0);
	SetEndOfFile(*(HANDLE*)(a1 + 32));
	v10 = 0;
LABEL_202:
	if (*(_QWORD*)(a1 + 624))
	{
		**(_QWORD**)(a1 + 616) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 616) + 8i64) = 0i64;
	}
	return (unsigned int)v10;
}
// 140B720B8: using guessed type __int64 qword_140B720B8;
// 1401B89B0: using guessed type int Buffer[128];

