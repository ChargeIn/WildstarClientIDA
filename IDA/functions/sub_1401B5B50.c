#include "../winhttp.h"

//----- (00000001401B5B50) ----------------------------------------------------
int __fastcall sub_1401B5B50(__int64 a1, const __m128i* a2, __int64 a3, int a4, _QWORD* a5)
{
	int v7; // r12d
	int result; // eax
	__int64 v10; // r8
	__int64* v11; // rbx
	__int64 v12; // r8
	__int16 v13; // ax
	__m128i* v14; // rcx
	DWORD v15; // r14d
	HANDLE FileW; // rsi
	__int64 v17; // r8
	__int64 v18; // rcx
	HANDLE v19; // r12
	__int64 v20; // rsi
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rcx
	int v24; // esi
	HANDLE v25; // r14
	signed int v26; // esi
	int* v27; // rax
	__int64* v28; // r14
	int* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rsi
	_WORD* v32; // rdx
	__int64 v33; // rcx
	__int16 v34; // ax
	int v35; // ebx
	int v36; // esi
	HANDLE v37; // r14
	signed int v38; // eax
	int* v39; // rax
	__int64* v40; // r14
	int* v41; // rax
	int* v42; // rax
	__int64 v43; // rcx
	int* v44; // rax
	__int64* v45; // rsi
	void(__fastcall * **v46)(_QWORD, _WORD*, char*); // r9
	_WORD* v47; // rdx
	__int64 v48; // rcx
	char* v49; // r8
	__int16 v50; // ax
	__int64 v51; // rax
	__int64 v52; // rax
	int v53; // edi
	__int64 v54; // rdx
	__int64* v55; // rcx
	unsigned __int8 v56; // dl
	HANDLE v57; // r13
	__int64 v58; // r8
	HANDLE v59; // r14
	signed int LastError; // esi
	int* v61; // rax
	__int64 v62; // rsi
	_WORD* v63; // rdx
	__int64 v64; // rcx
	__int16 v65; // ax
	int* v66; // rax
	__int64 v67; // rcx
	int v68; // edi
	__int64 v69; // rsi
	__int64 v70; // rax
	__int64 v71; // rcx
	int* v72; // rax
	__int64 v73; // rax
	int* v74; // rax
	_QWORD* v75; // rsi
	int* v76; // rax
	int* v77; // rax
	void(__fastcall * **v78)(_QWORD, _WORD*, char*); // r9
	_WORD* v79; // rdx
	__int64 v80; // rcx
	char* v81; // r8
	__int16 v82; // ax
	__int64 v83; // rax
	__int64 v84; // rax
	int* v85; // rax
	__int64 v86; // rcx
	HANDLE v87; // rax
	DWORD v88; // r15d
	__int64 v89; // rsi
	__int64 v90; // rax
	__int64 v91; // rcx
	int* v92; // rax
	__int64 v93; // rax
	int* v94; // rax
	__int64 v95; // rax
	int* v96; // rax
	int* v97; // rax
	int v98[2]; // [rsp+40h] [rbp-C0h] BYREF
	int v99[2]; // [rsp+48h] [rbp-B8h]
	_QWORD* v100; // [rsp+50h] [rbp-B0h]
	__int64 v101; // [rsp+58h] [rbp-A8h] BYREF
	const __m128i* v102; // [rsp+60h] [rbp-A0h]
	__int64 v103; // [rsp+68h] [rbp-98h] BYREF
	__int64 v104; // [rsp+70h] [rbp-90h]
	__int64 v105; // [rsp+78h] [rbp-88h]
	__int64 v106; // [rsp+80h] [rbp-80h] BYREF
	__int64 v107; // [rsp+88h] [rbp-78h]
	__int64 v108; // [rsp+90h] [rbp-70h]
	__int16 v109[264]; // [rsp+A0h] [rbp-60h] BYREF
	__m128i FileName[33]; // [rsp+2B0h] [rbp+1B0h] BYREF
	WCHAR v111[264]; // [rsp+4C0h] [rbp+3C0h] BYREF

	v7 = a3;
	v98[0] = a3;
	v100 = a5;
	v102 = a2;
	if (!a2 || (unsigned int)(a4 - 3) > 1 && (a3 & 2) == 0 || (unsigned int)(a4 - 2) <= 2 && (a3 & 1) == 0 || !a5)
		return -2147024809;
	v11 = 0i64;
	if (!sub_1401B5110(a1, v109, a3, (__int64)a2))
		v109[0] = 0;
	sub_1401B5020(a1, (WCHAR*)FileName, v10, (const WCHAR*)a2);
	v13 = v109[0];
	v14 = (__m128i*)v109;
	if (!v109[0])
		v14 = FileName;
	*(_QWORD*)v99 = v14;
	if ((v7 & 2) == 0)
	{
		v88 = 1;
		if ((v7 & 8) != 0)
			v88 = 3;
		if (*(_DWORD*)(a1 + 2160))
		{
			if (sub_1401B5360(a1, v111, v12, a2))
			{
				FileW = CreateFileW(v111, 0x80000000, v88, 0i64, 3u, 0x40000000u, 0i64);
				if (FileW != (HANDLE)-1i64)
				{
				LABEL_91:
					v56 = 0;
					goto LABEL_191;
				}
				result = GetLastError();
				if ((unsigned int)(result - 2) > 1)
					goto LABEL_154;
			}
			v13 = v109[0];
		}
		if (v13)
		{
			if (!*(_DWORD*)(a1 + 2160))
				goto LABEL_167;
			FileW = CreateFileW((LPCWSTR)FileName, 0x80000000, v88, 0i64, 3u, 0x40000000u, 0i64);
			if (FileW == (HANDLE)-1i64)
			{
				result = GetLastError();
				if ((unsigned int)(result - 2) <= 1)
				{
				LABEL_167:
					v89 = 0i64;
					if (!*(_QWORD*)(a1 + 2136))
					{
					LABEL_173:
						if (a4 == 3)
						{
							v101 = 0x141D41AD0i64;
							sub_1401A3130(3, 0, &v101, v102);
						}
						return -2147023728;
					}
					while (1)
					{
						v90 = *(_QWORD*)(a1 + 2128);
						*(_QWORD*)v98 = 0i64;
						if ((*(int(__fastcall**)(_QWORD, __int16*, __int64*))(**(_QWORD**)(v90 + 8 * v89) + 40i64))(
							*(_QWORD*)(v90 + 8 * v89),
							v109,
							&v103) >= 0)
						{
							v91 = *(_QWORD*)(*(_QWORD*)(a1 + 2144) + 8 * v89);
							if ((*(int(__fastcall**)(__int64, __int64*, __int64*, int*))(*(_QWORD*)v91 + 24i64))(
								v91,
								&v106,
								&v101,
								v98) >= 0)
								break;
						}
						if (*(_QWORD*)v98)
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
						if ((unsigned __int64)++v89 >= *(_QWORD*)(a1 + 2136))
							goto LABEL_173;
					}
					if (v101 != v105)
						goto LABEL_177;
					if ((v108 & 0x200000000i64) != 0)
					{
						v92 = sub_14018B280(968i64, 8u);
						if (v92)
						{
							v93 = sub_1401D1F20((__int64)v92, a1, *(__int64*)v99, v7, &v103, *(void(__fastcall****)(_QWORD))v98);
							*v100 = v93;
							goto LABEL_89;
						}
					}
					else if ((v108 & 0x400000000i64) != 0)
					{
						v94 = sub_14018B280(1064i64, 8u);
						if (v94)
						{
							v95 = sub_1401D2590((__int64)v94, a1, *(__int64*)v99, v7, &v103, *(void(__fastcall****)(_QWORD))v98);
							*v100 = v95;
							goto LABEL_89;
						}
					}
					else
					{
						v96 = sub_14018B280(864i64, 0);
						if (v96)
							v11 = sub_1401D2D90(v96, a1, *(__int64*)v99, v7, &v103, *(void(__fastcall****)(_QWORD))v98);
					}
					*v100 = v11;
				LABEL_89:
					if (*(_QWORD*)v98)
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
					return 0;
				}
			LABEL_154:
				if (result > 0)
					return (unsigned __int16)result | 0x80070000;
				return result;
			}
		}
		else
		{
			FileW = CreateFileW((LPCWSTR)FileName, 0x80000000, v88, 0i64, 3u, 0x40000000u, 0i64);
			if (FileW == (HANDLE)-1i64)
				goto LABEL_153;
		}
		v56 = 8;
	LABEL_191:
		v97 = sub_14018B280(768i64, v56);
		if (v97)
		{
			v73 = sub_1401D1A90((__int64)v97, (HANDLE*)a1, *(__int64*)v99, v7, FileW);
			goto LABEL_193;
		}
		goto LABEL_194;
	}
	if (v109[0] && !*(_DWORD*)(a1 + 2160))
		return -2147024891;
	v15 = (v7 & 4) != 0;
	if ((v7 & 8) != 0)
		v15 |= 2u;
	switch (a4)
	{
	case 0:
		result = sub_1401B76D0((__int64)v14, FileName);
		if (result < 0)
			return result;
		v87 = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 2u, 0x40000080u, 0i64);
	LABEL_152:
		FileW = v87;
		if (v87 == (HANDLE)-1i64)
			goto LABEL_153;
		goto LABEL_91;
	case 1:
		result = sub_1401B76D0((__int64)v14, FileName);
		if (result < 0)
			return result;
		v87 = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 1u, 0x40000080u, 0i64);
		goto LABEL_152;
	case 2:
		result = sub_1401B76D0((__int64)v14, FileName);
		if (result < 0)
			return result;
		v57 = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 4u, 0x40000080u, 0i64);
		result = GetLastError();
		if (v57 == (HANDLE)-1i64)
			goto LABEL_154;
		if (result == 183)
			goto LABEL_123;
		if (*(_DWORD*)(a1 + 2160) && sub_1401B5360(a1, v111, v58, a2))
		{
			v59 = CreateFileW(v111, 0x80000000, 1u, 0i64, 3u, 0x40000000u, 0i64);
			if (v59 != (HANDLE)-1i64)
			{
				v61 = sub_14018B280(768i64, 0);
				v62 = (__int64)v61;
				if (v61)
				{
					v63 = v61 + 6;
					*(_QWORD*)v61 = off_140B5FDB0;
					v64 = 260i64;
					*((_QWORD*)v61 + 83) = 0i64;
					*((_QWORD*)v61 + 84) = 0i64;
					*((_QWORD*)v61 + 85) = 0i64;
					*((_QWORD*)v61 + 86) = 0i64;
					v61[2] = 1;
					*((_QWORD*)v61 + 2) = a1;
					v61[136] = 1;
					*((_QWORD*)v61 + 73) = 0i64;
					*((_QWORD*)v61 + 71) = 0i64;
					v61[144] = 0;
					*((_QWORD*)v61 + 74) = v61 + 146;
					while (v64 != -2147483386)
					{
						v65 = *(_WORD*)((char*)v63 + (_QWORD)&v111[-12] - v62);
						if (!v65)
							break;
						*v63++ = v65;
						if (!--v64)
						{
							--v63;
							break;
						}
					}
					*v63 = 0;
					*(_QWORD*)v62 = off_140B5F940;
					*(_QWORD*)(v62 + 696) = v59;
					GetFileTime(v59, 0i64, 0i64, (LPFILETIME)(v62 + 560));
					GetFileSizeEx(*(HANDLE*)(v62 + 696), (PLARGE_INTEGER)(v62 + 552));
					CreateIoCompletionPort(*(HANDLE*)(v62 + 696), *(HANDLE*)a1, 1ui64, 0);
				}
				else
				{
					v62 = 0i64;
				}
				v66 = sub_14018B280(768i64, 0);
				if (v66)
					v11 = (__int64*)sub_1401D1A90((__int64)v66, (HANDLE*)a1, *(__int64*)v99, v7, v57);
				v68 = sub_1401B77B0(v67, v11, v62);
				if (v68 < 0)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v62);
					(*(void(__fastcall**)(__int64*))(*v11 + 8))(v11);
					return v68;
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v62);
				goto LABEL_194;
			}
			LastError = GetLastError();
			if ((unsigned int)(LastError - 2) > 1)
			{
				if (LastError > 0)
					LastError = (unsigned __int16)LastError | 0x80070000;
				CloseHandle(v57);
				return LastError;
			}
		}
		if (!v109[0] || (v69 = 0i64, !*(_QWORD*)(a1 + 2136)))
		{
		LABEL_123:
			v72 = sub_14018B280(768i64, 0);
			if (v72)
			{
				v73 = sub_1401D1A90((__int64)v72, (HANDLE*)a1, *(__int64*)v99, v7, v57);
			LABEL_193:
				v11 = (__int64*)v73;
			}
		LABEL_194:
			*v100 = v11;
			return 0;
		}
		while (1)
		{
			v70 = *(_QWORD*)(a1 + 2128);
			*(_QWORD*)v98 = 0i64;
			if ((*(int(__fastcall**)(_QWORD, __int16*, __int64*))(**(_QWORD**)(v70 + 8 * v69) + 40i64))(
				*(_QWORD*)(v70 + 8 * v69),
				v109,
				&v103) >= 0)
			{
				v71 = *(_QWORD*)(*(_QWORD*)(a1 + 2144) + 8 * v69);
				if ((*(int(__fastcall**)(__int64, __int64*, __int64*, int*))(*(_QWORD*)v71 + 24i64))(
					v71,
					&v106,
					&v101,
					v98) >= 0)
					break;
			}
			if (*(_QWORD*)v98)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
			if ((unsigned __int64)++v69 >= *(_QWORD*)(a1 + 2136))
				goto LABEL_123;
		}
		if (v101 == v105)
		{
			if ((v108 & 0x200000000i64) != 0)
			{
				v74 = sub_14018B280(968i64, 0);
				if (v74)
				{
					v75 = (_QWORD*)sub_1401D1F20(
						(__int64)v74,
						a1,
						(__int64)v109,
						1,
						&v103,
						*(void(__fastcall****)(_QWORD))v98);
				LABEL_140:
					v85 = sub_14018B280(768i64, 0);
					if (v85)
						v11 = (__int64*)sub_1401D1A90((__int64)v85, (HANDLE*)a1, *(__int64*)v99, v7, v57);
					v53 = sub_1401B77B0(v86, v11, (__int64)v75);
					if (v53 < 0)
					{
						(*(void(__fastcall**)(_QWORD*))(*v75 + 8i64))(v75);
						v54 = *v11;
						v55 = v11;
						goto LABEL_144;
					}
					(*(void(__fastcall**)(_QWORD*))(*v75 + 8i64))(v75);
					*v100 = v11;
					goto LABEL_89;
				}
			}
			else if ((v108 & 0x400000000i64) != 0)
			{
				v76 = sub_14018B280(1064i64, 0);
				if (v76)
				{
					v75 = (_QWORD*)sub_1401D2590(
						(__int64)v76,
						a1,
						(__int64)v109,
						1,
						&v103,
						*(void(__fastcall****)(_QWORD))v98);
					goto LABEL_140;
				}
			}
			else
			{
				v77 = sub_14018B280(864i64, 0);
				v75 = v77;
				if (v77)
				{
					v78 = *(void(__fastcall****)(_QWORD, _WORD*, char*))v98;
					v79 = v77 + 6;
					*(_QWORD*)v77 = off_140B5FDB0;
					*((_QWORD*)v77 + 83) = 0i64;
					*((_QWORD*)v77 + 84) = 0i64;
					*((_QWORD*)v77 + 85) = 0i64;
					*((_QWORD*)v77 + 86) = 0i64;
					v80 = 260i64;
					v77[2] = 1;
					*((_QWORD*)v77 + 2) = a1;
					v77[136] = 1;
					*((_QWORD*)v77 + 73) = 0i64;
					*((_QWORD*)v77 + 71) = 0i64;
					v77[144] = 0;
					*((_QWORD*)v77 + 74) = v77 + 146;
					v81 = (char*)((char*)v109 - (char*)(v77 + 6));
					while (v80 != -2147483386)
					{
						v82 = *(_WORD*)((char*)v79 + (_QWORD)v81);
						if (!v82)
							break;
						*v79++ = v82;
						if (!--v80)
						{
							--v79;
							break;
						}
					}
					*v79 = 0;
					*v75 = off_140B5FBE0;
					v75[87] = v103;
					v75[88] = v104;
					v75[89] = v105;
					v75[90] = v106;
					v75[91] = v107;
					v83 = v108;
					v75[93] = v78;
					v75[92] = v83;
					(**v78)(v78, v79, v81);
					v84 = v75[87];
					v75[94] = 0i64;
					v75[70] = v84;
					v75[69] = v75[88];
					goto LABEL_140;
				}
			}
			v75 = 0i64;
			goto LABEL_140;
		}
	LABEL_177:
		if (*(_QWORD*)v98)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
		return -1610416125;
	}
	if ((unsigned int)(a4 - 3) > 1)
		return -2147467259;
	FileW = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 3u, 0x40000000u, 0i64);
	if (FileW != (HANDLE)-1i64)
		goto LABEL_91;
	if (GetLastError() - 2 > 1)
	{
	LABEL_153:
		result = GetLastError();
		goto LABEL_154;
	}
	if (!*(_DWORD*)(a1 + 2160) || !sub_1401B5360(a1, v111, v17, v102))
		goto LABEL_29;
	v19 = CreateFileW(v111, 0x80000000, 1u, 0i64, 3u, 0x40000000u, 0i64);
	if (v19 == (HANDLE)-1i64)
	{
		result = GetLastError();
		if ((unsigned int)(result - 2) <= 1)
		{
			v7 = v98[0];
		LABEL_29:
			if (v109[0])
			{
				v20 = 0i64;
				if (*(_QWORD*)(a1 + 2136))
				{
					while (1)
					{
						v21 = *(_QWORD*)(a1 + 2128);
						*(_QWORD*)v98 = 0i64;
						if ((*(int(__fastcall**)(_QWORD, __int16*, __int64*))(**(_QWORD**)(v21 + 8 * v20) + 40i64))(
							*(_QWORD*)(v21 + 8 * v20),
							v109,
							&v103) >= 0)
						{
							v22 = *(_QWORD*)(*(_QWORD*)(a1 + 2144) + 8 * v20);
							if ((*(int(__fastcall**)(__int64, __int64*, __int64*, int*))(*(_QWORD*)v22 + 24i64))(
								v22,
								&v106,
								&v101,
								v98) >= 0)
								break;
						}
						if (*(_QWORD*)v98)
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
						if ((unsigned __int64)++v20 >= *(_QWORD*)(a1 + 2136))
							goto LABEL_36;
					}
					if (v101 == v105)
					{
						v36 = sub_1401B76D0(v23, FileName);
						if (v36 < 0)
						{
						LABEL_65:
							if (*(_QWORD*)v98)
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
							return v36;
						}
						v37 = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 4u, 0x40000080u, 0i64);
						v38 = GetLastError();
						v36 = v38;
						if (v37 == (HANDLE)-1i64)
						{
							if (v38 > 0)
								v36 = (unsigned __int16)v38 | 0x80070000;
							goto LABEL_65;
						}
						v39 = sub_14018B280(768i64, 0);
						if (v39)
							v40 = (__int64*)sub_1401D1A90((__int64)v39, (HANDLE*)a1, *(__int64*)v99, v7, v37);
						else
							v40 = 0i64;
						if (!v36)
						{
							if ((v108 & 0x200000000i64) != 0)
							{
								v41 = sub_14018B280(968i64, 0);
								if (v41)
									sub_1401D1F20((__int64)v41, a1, (__int64)v109, 1, &v103, *(void(__fastcall****)(_QWORD))v98);
							}
							if ((v108 & 0x400000000i64) != 0)
							{
								v42 = sub_14018B280(1064i64, 0);
								if (v42)
									v11 = (__int64*)sub_1401D2590(
										(__int64)v42,
										a1,
										(__int64)v109,
										1,
										&v103,
										*(void(__fastcall****)(_QWORD))v98);
							}
							else
							{
								v44 = sub_14018B280(864i64, 0);
								v45 = (__int64*)v44;
								if (v44)
								{
									v46 = *(void(__fastcall****)(_QWORD, _WORD*, char*))v98;
									v47 = v44 + 6;
									*(_QWORD*)v44 = off_140B5FDB0;
									*((_QWORD*)v44 + 83) = 0i64;
									*((_QWORD*)v44 + 84) = 0i64;
									*((_QWORD*)v44 + 85) = 0i64;
									*((_QWORD*)v44 + 86) = 0i64;
									v48 = 260i64;
									v44[2] = 1;
									*((_QWORD*)v44 + 2) = a1;
									v44[136] = 1;
									*((_QWORD*)v44 + 73) = 0i64;
									*((_QWORD*)v44 + 71) = 0i64;
									v44[144] = 0;
									*((_QWORD*)v44 + 74) = v44 + 146;
									v49 = (char*)((char*)v109 - (char*)(v44 + 6));
									while (v48 != -2147483386)
									{
										v50 = *(_WORD*)((char*)v47 + (_QWORD)v49);
										if (!v50)
											break;
										*v47++ = v50;
										if (!--v48)
										{
											--v47;
											break;
										}
									}
									*v47 = 0;
									*v45 = (__int64)off_140B5FBE0;
									v45[87] = v103;
									v45[88] = v104;
									v45[89] = v105;
									v45[90] = v106;
									v45[91] = v107;
									v51 = v108;
									v45[93] = (__int64)v46;
									v45[92] = v51;
									(**v46)(v46, v47, v49);
									v52 = v45[87];
									v45[94] = 0i64;
									v45[70] = v52;
									v11 = v45;
									v45[69] = v45[88];
								}
							}
							v53 = sub_1401B77B0(v43, v40, (__int64)v11);
							if (v53 < 0)
							{
								(*(void(__fastcall**)(__int64*))(*v11 + 8))(v11);
								v54 = *v40;
								v55 = v40;
							LABEL_144:
								(*(void(__fastcall**)(__int64*))(v54 + 8))(v55);
								if (*(_QWORD*)v98)
									(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v98 + 8i64))(*(_QWORD*)v98);
								return v53;
							}
							(*(void(__fastcall**)(__int64*))(*v11 + 8))(v11);
						}
						*v100 = v40;
						goto LABEL_89;
					}
					goto LABEL_177;
				}
			}
		LABEL_36:
			if (a4 == 3)
			{
				v101 = 0x141D41AF8i64;
				sub_1401A3130(3, 0, &v101, v102);
				return -2147023728;
			}
			return -2147023728;
		}
		goto LABEL_154;
	}
	v24 = sub_1401B76D0(v18, FileName);
	if (v24 < 0)
	{
		CloseHandle(v19);
		return v24;
	}
	v25 = CreateFileW((LPCWSTR)FileName, 0xC0000000, v15, 0i64, 4u, 0x40000080u, 0i64);
	v26 = GetLastError();
	if (v25 != (HANDLE)-1i64)
	{
		v27 = sub_14018B280(768i64, 0);
		if (v27)
			v28 = (__int64*)sub_1401D1A90((__int64)v27, (HANDLE*)a1, *(__int64*)v99, v98[0], v25);
		else
			v28 = 0i64;
		if (v26)
		{
			CloseHandle(v19);
			*v100 = v28;
		}
		else
		{
			v29 = sub_14018B280(768i64, 0);
			v31 = (__int64)v29;
			if (v29)
			{
				v32 = v29 + 6;
				*(_QWORD*)v29 = off_140B5FDB0;
				v33 = 260i64;
				*((_QWORD*)v29 + 83) = 0i64;
				*((_QWORD*)v29 + 84) = 0i64;
				*((_QWORD*)v29 + 85) = 0i64;
				*((_QWORD*)v29 + 86) = 0i64;
				v29[2] = 1;
				*((_QWORD*)v29 + 2) = a1;
				v29[136] = 1;
				*((_QWORD*)v29 + 73) = 0i64;
				*((_QWORD*)v29 + 71) = 0i64;
				v29[144] = 0;
				*((_QWORD*)v29 + 74) = v29 + 146;
				while (v33 != -2147483386)
				{
					v34 = *(_WORD*)((char*)v32 + (_QWORD)&v111[-12] - v31);
					if (!v34)
						break;
					*v32++ = v34;
					if (!--v33)
					{
						--v32;
						break;
					}
				}
				*v32 = 0;
				*(_QWORD*)v31 = off_140B5F940;
				*(_QWORD*)(v31 + 696) = v19;
				GetFileTime(v19, 0i64, 0i64, (LPFILETIME)(v31 + 560));
				GetFileSizeEx(*(HANDLE*)(v31 + 696), (PLARGE_INTEGER)(v31 + 552));
				CreateIoCompletionPort(*(HANDLE*)(v31 + 696), *(HANDLE*)a1, 1ui64, 0);
			}
			else
			{
				v31 = 0i64;
			}
			v35 = sub_1401B77B0(v30, v28, v31);
			if (v35 < 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
				(*(void(__fastcall**)(__int64*))(*v28 + 8))(v28);
				return v35;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
			*v100 = v28;
		}
		return 0;
	}
	CloseHandle(v19);
	if (v26 > 0)
		return (unsigned __int16)v26 | 0x80070000;
	return v26;
}
// 1401B5F59: conditional instruction was optimized away because rcx.8!=0
// 1401B61F7: conditional instruction was optimized away because rcx.8!=0
// 1401B6477: conditional instruction was optimized away because rcx.8!=0
// 1401B6717: conditional instruction was optimized away because rcx.8!=0
// 1401B5C0B: variable 'v10' is possibly undefined
// 1401B5CF3: variable 'v17' is possibly undefined
// 1401B5E01: variable 'v18' is possibly undefined
// 1401B5FBD: variable 'v30' is possibly undefined
// 1401B6021: variable 'v23' is possibly undefined
// 1401B628A: variable 'v43' is possibly undefined
// 1401B6359: variable 'v58' is possibly undefined
// 1401B6507: variable 'v67' is possibly undefined
// 1401B67D8: variable 'v86' is possibly undefined
// 1401B68D9: variable 'v12' is possibly undefined
// 140B5F940: using guessed type __int64 (__fastcall *off_140B5F940[10])();
// 140B5FBE0: using guessed type __int64 (__fastcall *off_140B5FBE0[10])();
// 140B5FDB0: using guessed type __int64 (__fastcall *off_140B5FDB0[10])();
// 1401B5B50: using guessed type __m128i FileName[33];

