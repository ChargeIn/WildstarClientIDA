#include "../winhttp.h"

//----- (0000000140191F50) ----------------------------------------------------
void __fastcall sub_140191F50(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int128* v3; // rbx
	HANDLE CurrentProcess; // r15
	HANDLE CurrentThread; // r12
	__int64 v7; // r8
	int* v8; // rcx
	int* v9; // r9
	__int64 v10; // rax
	__int128 v11; // xmm0
	unsigned __int64 i; // r14
	BOOL v13; // eax
	__int64 v14; // rbx
	BOOL v15; // esi
	HANDLE EventW; // rcx
	DWORD64 Offset; // rbx
	BOOL LineFromAddr64; // eax
	__int64 v19; // rbx
	BOOL v20; // esi
	HANDLE v21; // rcx
	DWORD v22; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v23; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v24; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v25; // [rsp+68h] [rbp-98h] BYREF
	struct _IMAGEHLP_LINE64 v26; // [rsp+70h] [rbp-90h] BYREF
	struct _tagSTACKFRAME64 v27; // [rsp+A0h] [rbp-60h] BYREF
	int v28[308]; // [rsp+1B0h] [rbp+B0h] BYREF
	struct _IMAGEHLP_MODULE64 v29; // [rsp+680h] [rbp+580h] BYREF
	struct _SYMBOL_INFO v30[23]; // [rsp+D10h] [rbp+C10h] BYREF

	if (a1)
	{
		v3 = *(__int128**)(a3 + 8);
		CurrentProcess = GetCurrentProcess();
		CurrentThread = GetCurrentThread();
		sub_1407DE220(a2, "\n");
		sub_1407DE220(a2, "//\n");
		sub_1407DE220(a2, "// Call stack\n");
		sub_1407DE220(a2, "//\n");
		sub_1407DE220(a2, "\n");
		sub_1407E4830((int*)&v27, 0i64, 0x108ui64);
		v27.AddrPC.Mode = AddrModeFlat;
		v27.AddrPC.Offset = *((_QWORD*)v3 + 31);
		v27.AddrFrame.Mode = AddrModeFlat;
		v27.AddrFrame.Offset = *((_QWORD*)v3 + 20);
		v27.AddrStack.Mode = AddrModeFlat;
		v27.AddrStack.Offset = *((_QWORD*)v3 + 19);
		v8 = v28;
		v9 = v28;
		if ((((unsigned __int8)v28 | (unsigned __int8)v3) & 0xF) != 0)
		{
			sub_1407DB590(v28, (int*)v3, 0x4D0ui64);
		}
		else
		{
			v10 = 9i64;
			do
			{
				v11 = *v3;
				v8 += 32;
				v3 += 8;
				*((_OWORD*)v8 - 8) = v11;
				*((_OWORD*)v8 - 7) = *(v3 - 7);
				*((_OWORD*)v8 - 6) = *(v3 - 6);
				*((_OWORD*)v8 - 5) = *(v3 - 5);
				*((_OWORD*)v8 - 4) = *(v3 - 4);
				*((_OWORD*)v8 - 3) = *(v3 - 3);
				*((_OWORD*)v8 - 2) = *(v3 - 2);
				*((_OWORD*)v8 - 1) = *(v3 - 1);
				--v10;
			} while (v10);
			*(_OWORD*)v8 = *v3;
			*((_OWORD*)v8 + 1) = v3[1];
			*((_OWORD*)v8 + 2) = v3[2];
			*((_OWORD*)v8 + 3) = v3[3];
			*((_OWORD*)v8 + 4) = v3[4];
		}
		sub_1407DE220(a2, "  rip              rsp\n", v7, v9);
		for (i = 0i64; i < 0x100; ++i)
		{
			sub_14003D8F0(&v23, &qword_140C67460);
			v13 = StackWalk64(
				0x8664u,
				CurrentProcess,
				CurrentThread,
				&v27,
				v28,
				0i64,
				(PFUNCTION_TABLE_ACCESS_ROUTINE64)sub_1401911D0,
				(PGET_MODULE_BASE_ROUTINE64)sub_140191060,
				0i64);
			v14 = v23;
			v15 = v13;
			if (*(_QWORD*)(v23 + 8) <= 1ui64)
			{
				*(_DWORD*)v23 = 0;
				_InterlockedExchange64((volatile __int64*)(v14 + 8), 0i64);
				if (*(_QWORD*)(v14 + 16))
				{
					if (!*(_QWORD*)(v14 + 24))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v14 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v23 + 8);
			}
			if (!v15)
				break;
			sub_1407DE220(a2, "  %p %p", (const void*)v27.AddrPC.Offset, (const void*)v27.AddrFrame.Offset);
			sub_1407E4830((int*)&v29, 0i64, 0x690ui64);
			v29.SizeOfStruct = 1680;
			if (sub_140191110(CurrentProcess, v27.AddrPC.Offset, &v29))
			{
				sub_1407DE220(a2, "  %s", v29.ModuleName);
				sub_1407E4830((int*)v30, 0i64, 0x58ui64);
				v30[0].SizeOfStruct = 88;
				v30[0].MaxNameLen = 2000;
				if (sub_140191280(CurrentProcess, v27.AddrPC.Offset, &v25, v30))
				{
					sub_1407DE220(a2, "!%s()", v30[0].Name);
					Offset = v27.AddrPC.Offset;
					*(_QWORD*)&v26.SizeOfStruct = 40i64;
					memset(&v26.Key, 0, 32);
					sub_14003D8F0(&v24, &qword_140C67460);
					LineFromAddr64 = SymGetLineFromAddr64(CurrentProcess, Offset, &v22, &v26);
					v19 = v24;
					v20 = LineFromAddr64;
					if (*(_QWORD*)(v24 + 8) <= 1ui64)
					{
						*(_DWORD*)v24 = 0;
						_InterlockedExchange64((volatile __int64*)(v19 + 8), 0i64);
						if (*(_QWORD*)(v19 + 16))
						{
							if (!*(_QWORD*)(v19 + 24))
							{
								v21 = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v19 + 24), (signed __int64)v21, 0i64))
									CloseHandle(v21);
							}
							SetEvent(*(HANDLE*)(v19 + 24));
						}
					}
					else
					{
						--* (_QWORD*)(v24 + 8);
					}
					if (v20)
					{
						sub_1407DE220(a2, " Line %u", v26.LineNumber);
						if (v22)
							sub_1407DE220(a2, " + 0x%x", v22);
					}
					else if (v25)
					{
						sub_1407DE220(a2, " + 0x%I64x");
					}
				}
				else
				{
					sub_1407DE220(a2, " + 0x%I64x");
				}
			}
			sub_1407DE220(a2, "\n");
		}
		sub_1407DE220(a2, "\n");
	}
}
// 140192115: variable 'v7' is possibly undefined
// 140192115: variable 'v9' is possibly undefined
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;
// 140191F50: using guessed type int var_13D0[308];

