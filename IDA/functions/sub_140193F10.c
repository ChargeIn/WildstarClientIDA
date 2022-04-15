#include "../winhttp.h"

//----- (0000000140193F10) ----------------------------------------------------
__int64 __fastcall sub_140193F10(int* a1)
{
	__int64 v1; // r13
	int SystemMetrics; // r15d
	int v3; // edi
	int v4; // esi
	int v5; // r14d
	unsigned __int16 v6; // bx
	int v7; // eax
	int v8; // ecx
	int v9; // eax
	int v10; // ecx
	__int64 v11; // r12
	int v12; // esi
	BSTR v13; // rax
	__int64 v14; // r10
	OLECHAR* v15; // r15
	__int64 v16; // rcx
	HMODULE v17; // rax
	HMODULE v18; // rbx
	HRESULT(__stdcall * CoSetProxyBlanket)(IUnknown*, DWORD, DWORD, OLECHAR*, DWORD, DWORD, RPC_AUTH_IDENTITY_HANDLE, DWORD); // rax
	OLECHAR* v20; // r14
	__int64 v21; // rbx
	const OLECHAR* v22; // rcx
	OLECHAR* v23; // rdi
	__int64 v24; // rbx
	OLECHAR* v25; // rdi
	int v26; // eax
	__int64 v27; // rbx
	int v28; // esi
	__int64 v29; // rdx
	_WORD* v30; // rcx
	__int64 v31; // rbx
	__int16 v32; // ax
	__int64 v33; // rbx
	OLECHAR* v34; // rdi
	int v35; // eax
	__int64 v36; // rbx
	int v37; // esi
	_WORD* v38; // rcx
	__int64 v39; // rdx
	__int64 v40; // rbx
	__int16 v41; // ax
	__int64 v42; // rbx
	OLECHAR* v43; // rdi
	int v44; // eax
	__int64 v45; // rbx
	_WORD* v46; // rcx
	__int64 v47; // rdx
	__int64 v48; // rbx
	__int16 v49; // ax
	__int64 v50; // rbx
	OLECHAR* v51; // rdi
	__int64 v52; // rbx
	OLECHAR* v53; // rdi
	__int64 v54; // rbx
	OLECHAR* v55; // rdi
	__int64 v56; // rbx
	OLECHAR* v57; // rdi
	OLECHAR* v58; // rbx
	unsigned int v59; // r12d
	__int64(__fastcall * *v60)(); // rbx
	__int64* v61; // r15
	OLECHAR* v62; // rsi
	int v63; // ebx
	unsigned int v64; // eax
	__int64 v65; // rbx
	OLECHAR* v66; // rsi
	int v67; // eax
	__int64 v68; // r8
	int v69; // ebx
	__int64 v70; // rdx
	int* v71; // rcx
	__int64 v72; // r8
	__int16 v73; // ax
	__int64 v74; // rbx
	OLECHAR* v75; // r14
	__int64 v76; // rax
	int* v77; // rcx
	__int64 v78; // rdx
	__int64 v79; // r8
	__int16 v80; // ax
	signed int LastError; // eax
	UINT SystemDirectoryW; // eax
	HMODULE LibraryW; // rax
	HMODULE v84; // rdi
	HRESULT(__stdcall * DirectDrawCreateEx)(GUID*, LPVOID*, const IID* const, IUnknown*); // r14
	HRESULT(__stdcall * DirectDrawEnumerateExA)(LPDDENUMCALLBACKEXA, LPVOID, DWORD); // rax
	UINT v87; // eax
	HMODULE v88; // rax
	HMODULE v89; // r15
	IDirect3D9* (__stdcall * Direct3DCreate9)(UINT); // rax
	unsigned __int64 v91; // rdi
	__int64 v92; // rax
	__int64 v93; // r14
	int v94; // eax
	unsigned int v95; // ebx
	int v96; // ebx
	_WORD* v97; // rsi
	unsigned __int64 v98; // r8
	char* v99; // rdx
	unsigned int v100; // ebx
	__int64 v101; // r11
	char v102; // r9
	__int16 v103; // cx
	char v104; // r10
	char v105; // cl
	char v106; // r10
	unsigned int v107; // ebx
	int v108; // ebx
	_WORD* v109; // rdx
	__int16 v110; // ax
	char* v111; // rdx
	__int64 v112; // r10
	char v113; // r8
	__int16 v114; // cx
	char v115; // r9
	char v116; // cl
	char v117; // r9
	unsigned int v118; // edi
	int v119; // ebx
	wchar_t** v120; // rdi
	unsigned int v121; // ebx
	wchar_t* v122; // rcx
	unsigned __int64 v123; // r8
	int v124; // ebx
	__int64 v126; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v127; // [rsp+58h] [rbp-A8h] BYREF
	__int64(__fastcall * *v128)(); // [rsp+60h] [rbp-A0h] BYREF
	__int64 v129; // [rsp+68h] [rbp-98h]
	LPVOID v130; // [rsp+70h] [rbp-90h]
	__int64 v131; // [rsp+80h] [rbp-80h] BYREF
	__int64 v132; // [rsp+88h] [rbp-78h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+90h] [rbp-70h] BYREF
	__int64 v134; // [rsp+98h] [rbp-68h]
	LPVOID lpTlsValue; // [rsp+A0h] [rbp-60h]
	__int64 v136; // [rsp+A8h] [rbp-58h] BYREF
	LPVOID ppv; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v138; // [rsp+B8h] [rbp-48h]
	__int64 v139; // [rsp+C0h] [rbp-40h]
	OLECHAR* v140; // [rsp+C8h] [rbp-38h]
	int* v141; // [rsp+D0h] [rbp-30h]
	struct _SYSTEM_INFO SystemInfo; // [rsp+D8h] [rbp-28h] BYREF
	int v143[2058]; // [rsp+110h] [rbp+10h] BYREF
	HRESULT(__stdcall * v144)(GUID*, LPVOID*, const IID* const, IUnknown*); // [rsp+2138h] [rbp+2038h]
	struct _MEMORYSTATUSEX Buffer; // [rsp+2140h] [rbp+2040h] BYREF
	struct _OSVERSIONINFOW VersionInformation; // [rsp+2180h] [rbp+2080h] BYREF
	unsigned __int16 v147; // [rsp+2294h] [rbp+2194h]
	unsigned __int16 v148; // [rsp+2296h] [rbp+2196h]
	unsigned __int16 v149; // [rsp+2298h] [rbp+2198h]
	unsigned __int8 v150; // [rsp+229Ah] [rbp+219Ah]
	char v151[512]; // [rsp+22A0h] [rbp+21A0h] BYREF
	char v152; // [rsp+24A0h] [rbp+23A0h] BYREF
	char v153; // [rsp+26A0h] [rbp+25A0h] BYREF
	int v154; // [rsp+26C8h] [rbp+25C8h]
	int v155; // [rsp+26CCh] [rbp+25CCh]
	int v156; // [rsp+26D0h] [rbp+25D0h]
	int v157; // [rsp+26D4h] [rbp+25D4h]
	int v158[1036]; // [rsp+26F0h] [rbp+25F0h] BYREF
	__int16 v159[32]; // [rsp+3720h] [rbp+3620h] BYREF
	WCHAR LibFileName[264]; // [rsp+3760h] [rbp+3660h] BYREF

	v1 = (__int64)a1;
	v141 = a1;
	sub_1407E4830(a1, 0i64, 0x143Cui64);
	sub_1407E4830(v158, 0i64, 0x1028ui64);
	memset(&SystemInfo, 0, sizeof(SystemInfo));
	GetNativeSystemInfo(&SystemInfo);
	SystemMetrics = GetSystemMetrics(89);
	v3 = GetSystemMetrics(87);
	v4 = GetSystemMetrics(88);
	v5 = GetSystemMetrics(86);
	if (SystemInfo.wProcessorArchitecture)
	{
		switch (SystemInfo.wProcessorArchitecture)
		{
		case 5u:
			v6 = 4;
			break;
		case 6u:
			v6 = 3;
			break;
		case 9u:
			v6 = 2;
			break;
		default:
			v6 = 0;
			break;
		}
	}
	else
	{
		v6 = 1;
	}
	sub_1407E4830((int*)&VersionInformation, 0i64, 0x11Cui64);
	VersionInformation.dwOSVersionInfoSize = 284;
	if (GetVersionExW(&VersionInformation))
	{
		v7 = v148;
		*(_DWORD*)(v1 + 5168) = (VersionInformation.dwMajorVersion << 16) | LOWORD(VersionInformation.dwMinorVersion);
		v8 = v7 | (v147 << 16);
		v9 = v150;
		*(_DWORD*)(v1 + 5172) = v8;
		v10 = (v9 | (v149 << 8)) << 8;
		*(_DWORD*)(v1 + 5176) = v10;
		if (SystemMetrics)
			*(_DWORD*)(v1 + 5176) = v10 | 1;
		if (v3)
			*(_DWORD*)(v1 + 5176) |= 2u;
		if (v4)
			*(_DWORD*)(v1 + 5176) |= 4u;
		if (v5)
			*(_DWORD*)(v1 + 5176) |= 8u;
	}
	ppv = 0i64;
	v136 = 0i64;
	*(_DWORD*)(v1 + 5164) = v6 | 0x10000;
	v11 = 512i64;
	v12 = CoInitialize(0i64);
	if (v12 >= 0)
	{
		v12 = CoCreateInstance(&stru_1409646A0, 0i64, 1u, &stru_140964700, &ppv);
		if (v12 < 0)
		{
		LABEL_145:
			if (ppv)
			{
				(*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
				ppv = 0i64;
			}
			goto LABEL_147;
		}
		if (!ppv)
		{
		LABEL_147:
			CoUninitialize();
			goto LABEL_148;
		}
		v13 = SysAllocString(L"\\\\.\\root\\CIMV2");
		v14 = *(_QWORD*)ppv;
		v15 = v13;
		v131 = (__int64)v13;
		v12 = (*(__int64(__fastcall**)(LPVOID, BSTR, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, __int64*))(v14 + 24))(
			ppv,
			v13,
			0i64,
			0i64,
			0i64,
			0,
			0i64,
			0i64,
			&v136);
		if (v12 < 0)
			goto LABEL_140;
		v16 = v136;
		if (!v136)
		{
		LABEL_141:
			if (v15)
			{
				SysFreeString(v15);
				v16 = v136;
			}
			if (v16)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
				v136 = 0i64;
			}
			goto LABEL_145;
		}
		v17 = sub_140193770((__int64)L"ole32.dll");
		v18 = v17;
		if (v17)
		{
			CoSetProxyBlanket = (HRESULT(__stdcall*)(IUnknown*, DWORD, DWORD, OLECHAR*, DWORD, DWORD, RPC_AUTH_IDENTITY_HANDLE, DWORD))GetProcAddress(v17, "CoSetProxyBlanket");
			if (CoSetProxyBlanket)
				((void(__fastcall*)(__int64, __int64, _QWORD, _QWORD, int, int, _QWORD, _DWORD))CoSetProxyBlanket)(
					v136,
					10i64,
					0i64,
					0i64,
					3,
					3,
					0i64,
					0);
			FreeLibrary(v18);
		}
		v132 = 0i64;
		v20 = SysAllocString(L"Win32_Processor");
		if (!v20)
		{
		LABEL_98:
			v58 = SysAllocString(L"Win32_VideoController");
			v140 = v58;
			if (v58)
			{
				v12 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, _QWORD, __int64*))(*(_QWORD*)v136 + 144i64))(
					v136,
					v58,
					0i64,
					0i64,
					&v132);
				if (v12 >= 0 && v132)
				{
					v127 = 0;
					TlsValue = 0i64;
					v134 = 0i64;
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v132 + 24i64))(v132);
					v12 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64(__fastcall***)(), unsigned int*))(*(_QWORD*)v132 + 32i64))(
						v132,
						5000i64,
						2i64,
						&TlsValue,
						&v127);
					if (v12 >= 0)
					{
						v59 = 0;
						if (v127)
						{
							do
							{
								v60 = (&TlsValue)[v59];
								v61 = (__int64*)&(&TlsValue)[v59];
								if (v60)
								{
									v62 = SysAllocString(L"AdapterRAM");
									v63 = (*((__int64(__fastcall**)(__int64(__fastcall**)(), OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD)) * v60
										+ 4))(
											v60,
											v62,
											0i64,
											&v128,
											0i64,
											0i64);
									v64 = v126;
									if (v63 >= 0)
										v64 = v129;
									LODWORD(v126) = v64;
									if (v62)
									{
										SysFreeString(v62);
										v64 = v126;
									}
									if (v63 >= 0)
										v158[517 * v59 + 516] = v64 >> 20;
									v65 = *v61;
									v66 = SysAllocString(L"Description");
									v67 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v65 + 32i64))(
										v65,
										v66,
										0i64,
										&v128,
										0i64,
										0i64);
									v68 = v139;
									v69 = v67;
									if (v67 >= 0)
										v68 = v129;
									v139 = v68;
									if (v66)
									{
										SysFreeString(v66);
										v68 = v139;
									}
									if (v69 >= 0)
									{
										v70 = 512i64;
										v71 = &v158[517 * v59];
										v72 = v68 - (_QWORD)v71;
										while (v70 != -2147483134)
										{
											v73 = *(_WORD*)((char*)v71 + v72);
											if (!v73)
												break;
											*(_WORD*)v71 = v73;
											v71 = (int*)((char*)v71 + 2);
											if (!--v70)
											{
												v71 = (int*)((char*)v71 - 2);
												break;
											}
										}
										*(_WORD*)v71 = 0;
									}
									v74 = *v61;
									v75 = SysAllocString(L"DriverVersion");
									v12 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v74 + 32i64))(
										v74,
										v75,
										0i64,
										&v128,
										0i64,
										0i64);
									v76 = v138;
									if (v12 >= 0)
										v76 = v129;
									v138 = v76;
									if (v75)
									{
										SysFreeString(v75);
										v76 = v138;
									}
									if (v12 >= 0)
									{
										v77 = &v158[517 * v59 + 256];
										v78 = 512i64;
										v79 = v76 - (_QWORD)v77;
										while (v78 != -2147483134)
										{
											v80 = *(_WORD*)((char*)v77 + v79);
											if (!v80)
												break;
											*(_WORD*)v77 = v80;
											v77 = (int*)((char*)v77 + 2);
											if (!--v78)
											{
												*((_WORD*)v77 - 1) = 0;
												goto LABEL_132;
											}
										}
										*(_WORD*)v77 = 0;
									}
								LABEL_132:
									if (*v61)
									{
										(*(void(__fastcall**)(__int64))(*(_QWORD*)*v61 + 16i64))(*v61);
										*v61 = 0i64;
									}
								}
								++v59;
							} while (v59 < v127);
							v1 = (__int64)v141;
							v58 = v140;
							v15 = (OLECHAR*)v131;
						}
						v11 = 512i64;
					}
					if (v132)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v132 + 16i64))(v132);
						v132 = 0i64;
					}
				}
				SysFreeString(v58);
			}
		LABEL_140:
			v16 = v136;
			goto LABEL_141;
		}
		v12 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, _QWORD, __int64*))(*(_QWORD*)v136 + 144i64))(
			v136,
			v20,
			0i64,
			0i64,
			&v132);
		if (v12 < 0 || !v132)
		{
		LABEL_97:
			SysFreeString(v20);
			goto LABEL_98;
		}
		v126 = 0i64;
		v127 = 0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v132 + 24i64))(v132);
		v12 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64*, unsigned int*))(*(_QWORD*)v132 + 32i64))(
			v132,
			5000i64,
			1i64,
			&v126,
			&v127);
		if (v12 < 0 || !v127 || (v21 = v126) == 0)
		{
		LABEL_95:
			if (v132)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v132 + 16i64))(v132);
				v132 = 0i64;
			}
			goto LABEL_97;
		}
		if (VersionInformation.dwPlatformId == 2)
		{
			if (VersionInformation.dwMajorVersion != 5 || VersionInformation.dwMinorVersion)
				goto LABEL_37;
		}
		else if (VersionInformation.dwPlatformId != 1)
		{
		LABEL_37:
			v22 = L"MaxClockSpeed";
		LABEL_38:
			v23 = SysAllocString(v22);
			if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v21 + 32i64))(
				v21,
				v23,
				0i64,
				&v128,
				0i64,
				0i64) >= 0)
				*(_DWORD*)(v1 + 3084) = v129;
			if (v23)
				SysFreeString(v23);
			v24 = v126;
			v25 = SysAllocString(L"Manufacturer");
			v26 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v24 + 32i64))(
				v24,
				v25,
				0i64,
				&v128,
				0i64,
				0i64);
			v27 = v131;
			v28 = v26;
			if (v26 >= 0)
				v27 = v129;
			if (v25)
				SysFreeString(v25);
			if (v28 >= 0)
			{
				v29 = 512i64;
				v30 = (_WORD*)v1;
				v31 = v27 - v1;
				while (v29 != -2147483134)
				{
					v32 = *(_WORD*)((char*)v30 + v31);
					if (!v32)
						break;
					*v30++ = v32;
					if (!--v29)
					{
						--v30;
						break;
					}
				}
				*v30 = 0;
			}
			v33 = v126;
			v34 = SysAllocString(L"Name");
			v35 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v33 + 32i64))(
				v33,
				v34,
				0i64,
				&v128,
				0i64,
				0i64);
			v36 = v131;
			v37 = v35;
			if (v35 >= 0)
				v36 = v129;
			if (v34)
				SysFreeString(v34);
			if (v37 >= 0)
			{
				v38 = (_WORD*)(v1 + 1024);
				v39 = 512i64;
				v40 = v36 - (v1 + 1024);
				while (v39 != -2147483134)
				{
					v41 = *(_WORD*)((char*)v38 + v40);
					if (!v41)
						break;
					*v38++ = v41;
					if (!--v39)
					{
						--v38;
						break;
					}
				}
				*v38 = 0;
			}
			v42 = v126;
			v43 = SysAllocString(L"Description");
			v44 = (*(__int64(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v42 + 32i64))(
				v42,
				v43,
				0i64,
				&v128,
				0i64,
				0i64);
			v45 = v131;
			v12 = v44;
			if (v44 >= 0)
				v45 = v129;
			if (v43)
				SysFreeString(v43);
			if (v12 >= 0)
			{
				v46 = (_WORD*)(v1 + 2048);
				v47 = 512i64;
				v48 = v45 - (v1 + 2048);
				while (v47 != -2147483134)
				{
					v49 = *(_WORD*)((char*)v46 + v48);
					if (!v49)
						break;
					*v46++ = v49;
					if (!--v47)
					{
						--v46;
						break;
					}
				}
				*v46 = 0;
			}
			v50 = v126;
			v51 = SysAllocString(L"Family");
			if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v50 + 32i64))(
				v50,
				v51,
				0i64,
				&v128,
				0i64,
				0i64) >= 0)
				*(_DWORD*)(v1 + 3072) = v129;
			if (v51)
				SysFreeString(v51);
			v52 = v126;
			v53 = SysAllocString(L"Level");
			if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v52 + 32i64))(
				v52,
				v53,
				0i64,
				&v128,
				0i64,
				0i64) >= 0)
				*(_DWORD*)(v1 + 3076) = v129;
			if (v53)
				SysFreeString(v53);
			v54 = v126;
			v55 = SysAllocString(L"Revision");
			if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v54 + 32i64))(
				v54,
				v55,
				0i64,
				&v128,
				0i64,
				0i64) >= 0)
				*(_DWORD*)(v1 + 3080) = v129;
			if (v55)
				SysFreeString(v55);
			v56 = v126;
			v57 = SysAllocString(L"NumberOfCores");
			if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, __int64(__fastcall***)(), _QWORD, _QWORD))(*(_QWORD*)v56 + 32i64))(
				v56,
				v57,
				0i64,
				&v128,
				0i64,
				0i64) >= 0)
				*(_DWORD*)(v1 + 3088) = v129;
			if (v57)
				SysFreeString(v57);
			if (v126)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v126 + 16i64))(v126);
				v126 = 0i64;
			}
			goto LABEL_95;
		}
		v22 = L"CurrentClockSpeed";
		goto LABEL_38;
	}
LABEL_148:
	Buffer.dwLength = 64;
	if (GlobalMemoryStatusEx(&Buffer))
	{
		*(_DWORD*)(v1 + 3092) = (Buffer.ullTotalPhys + 0xFFFFF) >> 20;
	}
	else
	{
		LastError = GetLastError();
		v12 = LastError;
		if (LastError > 0)
			v12 = (unsigned __int16)LastError | 0x80070000;
	}
	sub_1407E4830(v143, 0i64, 0x2030ui64);
	SystemDirectoryW = GetSystemDirectoryW(LibFileName, 0x104u);
	if (SystemDirectoryW)
	{
		if ((int)sub_14001B370(&LibFileName[SystemDirectoryW], 260i64 - SystemDirectoryW, L"\\%s", L"ddraw.dll") >= 0)
		{
			LibraryW = LoadLibraryW(LibFileName);
			v84 = LibraryW;
			if (LibraryW)
			{
				DirectDrawCreateEx = (HRESULT(__stdcall*)(GUID*, LPVOID*, const IID* const, IUnknown*))GetProcAddress(LibraryW, "DirectDrawCreateEx");
				DirectDrawEnumerateExA = (HRESULT(__stdcall*)(LPDDENUMCALLBACKEXA, LPVOID, DWORD))GetProcAddress(
					v84,
					"DirectDrawEnumerateExA");
				if (DirectDrawCreateEx && DirectDrawEnumerateExA)
				{
					v144 = DirectDrawCreateEx;
					v143[0] = 0;
					((void(__fastcall*)(_BOOL8(__fastcall*)(__int64, __int64, char*, unsigned int*), int*, __int64))DirectDrawEnumerateExA)(
						sub_140193C80,
						v143,
						1i64);
				}
				FreeLibrary(v84);
			}
		}
	}
	if (v12 < 0)
		goto LABEL_227;
	v12 = -2147467259;
	v87 = GetSystemDirectoryW(LibFileName, 0x104u);
	if (!v87)
		goto LABEL_227;
	if ((int)sub_14001B370(&LibFileName[v87], 260i64 - v87, L"\\%s", L"d3d9.dll") < 0)
		goto LABEL_227;
	v88 = LoadLibraryW(LibFileName);
	v89 = v88;
	if (!v88)
		goto LABEL_227;
	Direct3DCreate9 = (IDirect3D9 * (__stdcall*)(UINT))GetProcAddress(v88, "Direct3DCreate9");
	if (!Direct3DCreate9)
		goto LABEL_226;
	v91 = 32i64;
	v92 = ((__int64(__fastcall*)(__int64))Direct3DCreate9)(32i64);
	v93 = v92;
	if (!v92)
		goto LABEL_226;
	v94 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, char*))(*(_QWORD*)v92 + 40i64))(v92, 0i64, 0i64, v151);
	*(_DWORD*)(v1 + 5144) = v154;
	v95 = v94;
	*(_DWORD*)(v1 + 5148) = v155;
	*(_DWORD*)(v1 + 5152) = v156;
	*(_DWORD*)(v1 + 5156) = v157;
	if (v94 >= 0)
	{
		v97 = (_WORD*)(v1 + 3096);
		v98 = 512i64;
		v99 = &v152;
		if (v1 == -3096)
		{
			v100 = -2147024809;
		LABEL_193:
			TlsValue = &off_140B5E648;
			v134 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v128 = TlsValue;
			v131 = 0x141D3DF00i64;
			v129 = v134;
			v130 = lpTlsValue;
			v108 = sub_1401971E0(&dword_140C8A1B4, 1, &v131, v100, &v128);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v108)
				DebugBreak();
			*v97 = 0;
		LABEL_185:
			v107 = 0;
			while ((unsigned int)sub_14018E2C0(v1 + 3096, (unsigned __int16*)&v158[517 * v107]))
			{
				if (++v107 >= 2)
				{
					v12 = 0;
					goto LABEL_202;
				}
			}
			v109 = (_WORD*)(v1 + 4120);
			*(_DWORD*)(v1 + 5160) = v158[517 * v107 + 516];
			while (v11 != -2147483134)
			{
				v110 = *(_WORD*)((char*)v109 + (_QWORD)&v158[256] + 2068i64 * v107 - (v1 + 4120));
				if (!v110)
					break;
				*v109++ = v110;
				if (!--v11)
				{
					--v109;
					break;
				}
			}
			v12 = 0;
			*v109 = 0;
			goto LABEL_202;
		}
		v101 = 0i64;
		while (1)
		{
			v102 = *v99;
			if (*v99 < 0)
			{
				if (v98 > 1 && (v102 & 0xE0) == 0xC0 && (v104 = v99[1], (v104 & 0xC0) == 0x80))
				{
					v99 += 2;
					v103 = v104 & 0x3F | ((v102 & 0x1F) << 6);
					v98 -= 2i64;
				}
				else
				{
					if (v98 <= 2
						|| (v102 & 0xF0) != 0xE0
						|| (v105 = v99[1], (v105 & 0xC0) != 0x80)
						|| (v106 = v99[2], (v106 & 0xC0) != 0x80))
					{
						++v99;
						--v98;
						goto LABEL_190;
					}
					v99 += 3;
					v103 = v106 & 0x3F | (((unsigned __int16)(v102 << 6) | v105 & 0x3F) << 6);
					v98 -= 3i64;
				}
			}
			else
			{
				++v99;
				v103 = v102;
				--v98;
			}
			if (v101 == 512)
			{
				v100 = -2147024774;
				goto LABEL_193;
			}
			v97[v101++] = v103;
			if (!v103)
				goto LABEL_185;
		LABEL_190:
			if (!v98)
				goto LABEL_185;
		}
	}
	v12 = 0;
	TlsValue = &off_140B5E648;
	v134 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v128 = TlsValue;
	v131 = 0x141D3DF18i64;
	v129 = v134;
	v130 = lpTlsValue;
	v96 = sub_1401971E0(&dword_140C8A1B8, 1, &v131, v95, &v128);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v96)
		DebugBreak();
	*(_WORD*)(v1 + 3096) = 0;
LABEL_202:
	if (*(_DWORD*)(v1 + 5160))
		goto LABEL_225;
	v111 = &v153;
	v112 = 0i64;
	while (1)
	{
		v113 = *v111;
		if (*v111 >= 0)
		{
			++v111;
			v114 = v113;
			--v91;
			goto LABEL_215;
		}
		if (v91 > 1 && (v113 & 0xE0) == 0xC0)
		{
			v115 = v111[1];
			if ((v115 & 0xC0) == 0x80)
			{
				v111 += 2;
				v114 = v115 & 0x3F | ((v113 & 0x1F) << 6);
				v91 -= 2i64;
				goto LABEL_215;
			}
		}
		if (v91 > 2 && (v113 & 0xF0) == 0xE0)
		{
			v116 = v111[1];
			if ((v116 & 0xC0) == 0x80)
			{
				v117 = v111[2];
				if ((v117 & 0xC0) == 0x80)
					break;
			}
		}
		++v111;
		--v91;
	LABEL_219:
		if (!v91)
			goto LABEL_220;
	}
	v111 += 3;
	v114 = v117 & 0x3F | (((unsigned __int16)(v113 << 6) | v116 & 0x3F) << 6);
	v91 -= 3i64;
LABEL_215:
	if (v112 != 32)
	{
		v159[v112++] = v114;
		if (v114)
			goto LABEL_219;
	}
LABEL_220:
	v118 = v143[0];
	v119 = 0;
	if (v143[0])
	{
		while ((unsigned int)sub_14018E2C0((__int64)v159, (unsigned __int16*)&v143[257 * v119 + 1]))
		{
			if (++v119 >= v118)
				goto LABEL_225;
		}
		*(_DWORD*)(v1 + 5160) = v143[257 * v119 + 257];
	}
LABEL_225:
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 16i64))(v93);
LABEL_226:
	FreeLibrary(v89);
LABEL_227:
	if (!*(_DWORD*)(v1 + 3088))
		*(_DWORD*)(v1 + 3088) = SystemInfo.dwNumberOfProcessors;
	if (*(_WORD*)(v1 + 3096))
	{
		v120 = off_140B5E650;
		v121 = 0;
		while (1)
		{
			v122 = *v120;
			v123 = 0i64;
			if (**v120)
			{
				do
					++v123;
				while (v122[v123]);
			}
			if (!(unsigned int)sub_14018E3E0((__int64)v122, (unsigned __int16*)(v1 + 3096), v123))
				break;
			++v121;
			++v120;
			if (v121 >= 0xB)
			{
				v134 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v128 = TlsValue;
				v131 = 0x141D3E030i64;
				v129 = v134;
				v130 = lpTlsValue;
				v124 = sub_1401971E0(&dword_140C8A1B0, 1, &v131, v1 + 3096, &v128);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v124)
					DebugBreak();
				return (unsigned int)v12;
			}
		}
	}
	return (unsigned int)v12;
}
// 14019438C: conditional instruction was optimized away because rdx.8!=0
// 140194426: conditional instruction was optimized away because rdx.8!=0
// 1401944BA: conditional instruction was optimized away because rdx.8!=0
// 140194827: conditional instruction was optimized away because rdx.8!=0
// 1401948E2: conditional instruction was optimized away because rdx.8!=0
// 140194E6A: conditional instruction was optimized away because r12.8!=0
// 140A43680: using guessed type wchar_t aS_9[4];
// 140A436D0: using guessed type wchar_t aOle32Dll_0[10];
// 140A437B8: using guessed type wchar_t aCurrentclocksp[18];
// 140A43810: using guessed type wchar_t aDdrawDll[10];
// 140A43940: using guessed type wchar_t aD3d9Dll[9];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B5E650: using guessed type wchar_t *off_140B5E650[11];
// 140C8A1B0: using guessed type _DWORD dword_140C8A1B0;
// 140C8A1B4: using guessed type _DWORD dword_140C8A1B4;
// 140C8A1B8: using guessed type _DWORD dword_140C8A1B8;
// 140193F10: using guessed type char var_1700[512];
// 140193F10: using guessed type __int16 var_280[32];

