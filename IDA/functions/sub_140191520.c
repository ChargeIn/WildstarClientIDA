//----- (0000000140191520) ----------------------------------------------------
__int64 __fastcall sub_140191520(unsigned __int64 a1, unsigned __int16* a2, unsigned int** a3)
{
	unsigned int* v3; // rbx
	__int64 v6; // r9
	const char* v7; // r8
	LPVOID i; // rsi
	const wchar_t* v9; // r14
	const WCHAR* CommandLineW; // rax
	LPWSTR* v11; // rax
	int v12; // esi
	const __m128i** v13; // rbx
	const __m128i* v14; // rax
	signed __int8* v15; // rdx
	__int64 v16; // rbx
	WCHAR* v17; // rcx
	WCHAR v18; // ax
	__int64 v19; // rbx
	WCHAR* v20; // rcx
	WCHAR v21; // ax
	const char* v32; // r8
	int pNumArgs; // [rsp+48h] [rbp-C0h] BYREF
	DWORD nSize; // [rsp+4Ch] [rbp-BCh] BYREF
	DWORD pcbBuffer; // [rsp+50h] [rbp-B8h] BYREF
	struct _SYSTEM_INFO SystemInfo; // [rsp+58h] [rbp-B0h] BYREF
	unsigned __int64 v53; // [rsp+88h] [rbp-80h] BYREF
	unsigned __int64 v54; // [rsp+90h] [rbp-78h] BYREF
	__int64 v55[6]; // [rsp+98h] [rbp-70h] BYREF
	char v56; // [rsp+C8h] [rbp-40h]
	WCHAR v57[20]; // [rsp+D0h] [rbp-38h] BYREF
	WCHAR Buffer[264]; // [rsp+F8h] [rbp-10h] BYREF
	WCHAR Filename[264]; // [rsp+308h] [rbp+200h] BYREF
	wchar_t v60[1024]; // [rsp+518h] [rbp+410h] BYREF

	v3 = *a3;
	sub_1407DE220(a1, "//\n");
	sub_1407DE220(a1, "// Exception\n");
	sub_1407DE220(a1, "//\n");
	sub_1407DE220(a1, "\n");
	sub_1407DE220(a1, "  ");
	v6 = *v3;
	if ((_DWORD)v6 == -1073741819)
	{
		v7 = "reading";
		if (*((_QWORD*)v3 + 4))
			v7 = "writing";
		sub_1407DE220(a1, "Access violation %s location 0x%p\n", v7, *((_QWORD*)v3 + 5));
	}
	else
	{
		if ((unsigned int)(v6 + 805371903) <= 2)
		{
			sub_1407DE220(a1, "%S", *((const wchar_t**)v3 + 4));
			goto LABEL_45;
		}
		if ((unsigned int)v6 > 0xC000008D)
		{
			switch ((unsigned int)v6)
			{
			case 0xC000008E:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float divide by zero", v6);
				break;
			case 0xC000008F:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float inexact result", v6);
				break;
			case 0xC0000090:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float invalid operation", v6);
				break;
			case 0xC0000091:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float overflow", v6);
				break;
			case 0xC0000092:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float stack check", v6);
				break;
			case 0xC0000093:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Float underflow", v6);
				break;
			case 0xC0000094:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Integer divide by zero", v6);
				break;
			case 0xC0000095:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Integer overflow", v6);
				break;
			case 0xC0000096:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Privileged instruction", v6);
				break;
			case 0xC00000FD:
				sub_1407DE220(a1, "%s (%0.8x)\n", "Stack overflow", v6);
				break;
			default:
				goto LABEL_41;
			}
		}
		else if ((_DWORD)v6 == -1073741683)
		{
			sub_1407DE220(a1, "%s (%0.8x)\n", "Float denormal operand", v6);
		}
		else
		{
			if ((unsigned int)v6 > 0xC0000006)
			{
				switch ((_DWORD)v6)
				{
				case 0xC0000008:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Invalid handle", v6);
					goto LABEL_45;
				case 0xC000001D:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Illegal instruction", v6);
					goto LABEL_45;
				case 0xC0000025:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Noncontinuable exception", v6);
					goto LABEL_45;
				case 0xC0000026:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Invalid disposition", v6);
					goto LABEL_45;
				case 0xC000008C:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Array bounds exceeded", v6);
					goto LABEL_45;
				}
			}
			else
			{
				switch ((_DWORD)v6)
				{
				case 0xC0000006:
					sub_1407DE220(a1, "%s (%0.8x)\n", "In page error", v6);
					goto LABEL_45;
				case 0x40000015:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Runtime error", v6);
					goto LABEL_45;
				case 0x80000001:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Guard page", v6);
					goto LABEL_45;
				case 0x80000002:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Datatype misalignment", v6);
					goto LABEL_45;
				case 0x80000003:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Breakpoint", v6);
					goto LABEL_45;
				case 0x80000004:
					sub_1407DE220(a1, "%s (%0.8x)\n", "Single step", v6);
					goto LABEL_45;
				}
			}
		LABEL_41:
			sub_1407DE220(a1, "%s (%0.8x)\n", "Unknown error", v6);
		}
	}
LABEL_45:
	for (i = TlsGetValue(dwTlsIndex); i; i = (LPVOID) * ((_QWORD*)i + 2))
	{
		v9 = (const wchar_t*)*((_QWORD*)i + 1);
		if (v9)
		{
			(**(void(__fastcall***)(LPVOID, wchar_t*, __int64))i)(i, v60, 1024i64);
			sub_1407DE220(a1, "  %S: %S\n", v9, v60);
		}
	}
	sub_1407DE220(a1, "\n");
	sub_1407DE220(a1, "  %0.2u/%0.2u/%0.2u %0.2u:%0.2u:%0.2u UTC\n", a2[1], a2[3], *a2 % 100, a2[4], a2[5], a2[6]);
	GetModuleFileNameW(0i64, Filename, 0x104u);
	sub_1407DE220(a1, "  %S", Filename);
	CommandLineW = GetCommandLineW();
	v11 = CommandLineToArgvW(CommandLineW, &pNumArgs);
	v12 = 1;
	if (pNumArgs > 1)
	{
		v13 = (const __m128i**)(v11 + 1);
		do
		{
			v14 = sub_1407DD988(*v13, 0x20u);
			v15 = " \"%S\"";
			if (!v14)
				v15 = " %S";
			sub_1407DE220(a1, v15, *v13);
			++v12;
			++v13;
		} while (v12 < pNumArgs);
	}
	sub_1407DE220(a1, (signed __int8*)L"\n");
	v16 = 257i64;
	pcbBuffer = 257;
	if (!GetUserNameW(Buffer, &pcbBuffer))
	{
		v17 = Buffer;
		while (v16 != -2147483389)
		{
			v18 = *(WCHAR*)((char*)v17 + (char*)L"unknown" - (char*)Buffer);
			if (!v18)
				break;
			*v17++ = v18;
			if (!--v16)
			{
				--v17;
				break;
			}
		}
		*v17 = 0;
	}
	v19 = 16i64;
	nSize = 16;
	if ((dword_140C63724 & 4) != 0 || !GetComputerNameW(v57, &nSize))
	{
		v20 = v57;
		while (v19 != -2147483630)
		{
			v21 = *(WCHAR*)((char*)v20 + (char*)L"UNKNOWN" - (char*)v57);
			if (!v21)
				break;
			*v20++ = v21;
			if (!--v19)
			{
				--v20;
				break;
			}
		}
		*v20 = 0;
	}
	sub_1407DE220(a1, "  %S@%S\n", Buffer, v57);
	GetSystemInfo(&SystemInfo);
	_RAX = 0x80000000i64;
	__asm { cpuid }
	HIDWORD(v53) = _RBX;
	v54 = __PAIR64__(_RDX, _RCX);
	if ((unsigned int)_RAX >= 0x80000004)
	{
		_RAX = 2147483650i64;
		v56 = 0;
		__asm { cpuid }
		v32 = (const char*)v55;
		v55[0] = __PAIR64__(_RBX, _RAX);
		v55[1] = __PAIR64__(_RDX, _RCX);
		_RAX = 2147483651i64;
		__asm { cpuid }
		v55[2] = __PAIR64__(_RBX, _RAX);
		v55[3] = __PAIR64__(_RDX, _RCX);
		_RAX = 2147483652i64;
		__asm { cpuid }
		v53 = __PAIR64__(_RBX, _RAX);
		v54 = __PAIR64__(_RDX, _RCX);
		v55[4] = __PAIR64__(_RBX, _RAX);
		v55[5] = __PAIR64__(_RDX, _RCX);
		if (LOBYTE(v55[0]) == 32)
		{
			do
				++v32;
			while (*v32 == 32);
		}
		sub_1407DE220(a1, "  %s", v32);
		if (SystemInfo.dwNumberOfProcessors > 1)
			sub_1407DE220(a1, " (%u CPUs)", SystemInfo.dwNumberOfProcessors);
		sub_1407DE220(a1, (signed __int8*)L"\n");
	}
	_RAX = 0i64;
	__asm { cpuid }
	v53 = __PAIR64__(_RBX, _RAX);
	v54 = __PAIR64__(_RDX, _RCX);
	sub_1407DE220(a1, "  %.4s%.4s%.4s (", (const char*)&v53 + 4, (const char*)&v54 + 4, (const char*)&v54);
	if (SystemInfo.wProcessorArchitecture < 0xBu)
		sub_1407DE220(a1, "%s", off_140C586C0[SystemInfo.wProcessorArchitecture]);
	if (IsProcessorFeaturePresent(3u))
		sub_1407DE220(a1, " MMX");
	if (IsProcessorFeaturePresent(6u))
		sub_1407DE220(a1, " SSE");
	if (IsProcessorFeaturePresent(0xAu))
		sub_1407DE220(a1, " SSE2");
	if (IsProcessorFeaturePresent(7u))
		sub_1407DE220(a1, " 3DNOW");
	if (IsProcessorFeaturePresent(8u))
		sub_1407DE220(a1, " RDTSC");
	sub_1407DE220(a1, ")\n");
	return sub_1407DE220(a1, (signed __int8*)L"\n");
}
// 140191AD6: conditional instruction was optimized away because rbx.8!=0
// 140191B46: conditional instruction was optimized away because rbx.8!=0
// 1409E1C8C: using guessed type wchar_t asc_1409E1C8C[2];
// 1409E1D5C: using guessed type wchar_t asc_1409E1D5C[2];
// 1409E1DFC: using guessed type wchar_t asc_1409E1DFC[2];
// 140A43048: using guessed type wchar_t aUnknown_2[8];
// 140A43068: using guessed type wchar_t aUnknown_3[8];
// 140C586C0: using guessed type char *off_140C586C0[11];
// 140C63724: using guessed type int dword_140C63724;
// 140191520: using guessed type wchar_t var_840[1024];

