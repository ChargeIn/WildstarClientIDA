#include "../winhttp.h"

//----- (00000001401C7B70) ----------------------------------------------------
__int64 __fastcall sub_1401C7B70(__int64 a1, unsigned int* a2)
{
	_DWORD* Value; // rax
	__int64 v5; // r14
	int v6; // ebx
	unsigned int v8; // esi
	unsigned int v9; // r15d
	__int64 v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	__int64 v13; // rax
	unsigned int v14; // ecx
	__int64 v15; // rdi
	__int64 v16; // rax
	HANDLE EventW; // rcx
	__int64 v18; // rbx
	__int64 v19; // rbx
	unsigned int v20; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-68h] BYREF
	__int128 v22; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v23)(); // [rsp+40h] [rbp-48h] BYREF
	__int128 v24; // [rsp+48h] [rbp-40h]
	__int64 v25; // [rsp+A0h] [rbp+18h] BYREF

	Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4));
	v5 = (__int64)Value;
	if (Value && *Value == 1)
	{
		if (*(_DWORD*)(a1 + 40) == 3 && *(_DWORD*)(*((_QWORD*)Value + 1) + 152i64) - *(_DWORD*)(a1 + 152) >= 0)
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v22 = 0i64;
			*((_QWORD*)&v22 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v23 = TlsValue;
			v25 = 0x141D42290i64;
			v24 = v22;
			v6 = sub_140196F30(&dword_140C8A23C, 35, &v25, &v23);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v22 + 1));
			if (v6)
				DebugBreak();
			return 0i64;
		}
		else
		{
			v8 = 0;
			if (Value[1])
			{
				v9 = v25;
				while (!(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(
					*(_QWORD*)(a1 + 32),
					0i64))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(qword_140C63758 + 176) + 24i64))(
						*(_QWORD*)(qword_140C63758 + 176),
						0i64))
					{
						v10 = qword_140C63758;
						CurrentThreadId = GetCurrentThreadId();
						if (*(_DWORD*)(v10 + 8) == CurrentThreadId)
						{
							++* (_QWORD*)(v10 + 16);
						}
						else
						{
							v12 = 0i64;
							while (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 16), 1i64, 0i64))
							{
								_mm_pause();
								if ((unsigned __int64)++v12 >= 0x400)
								{
									sub_14019FB60(v10 + 8, CurrentThreadId);
									goto LABEL_20;
								}
							}
							*(_DWORD*)(v10 + 8) = CurrentThreadId;
						}
					LABEL_20:
						v13 = sub_1401D76E0(qword_140C63758 + 120);
						v15 = v13;
						if (v13)
						{
							v9 = *(_DWORD*)(v13 + 156);
							v16 = qword_140C63758;
							v14 = v9 + 1;
							*(_DWORD*)(v15 + 156) = v9 + 1;
							if (v9 + 1 == *(_DWORD*)(v15 + 16))
							{
								if (v15 == *(_QWORD*)(v16 + 168))
									*(_QWORD*)(v16 + 168) = 0i64;
								else
									sub_1401D7680(v16 + 120, v15);
							}
						}
						if (*(_QWORD*)(v10 + 16) <= 1ui64)
						{
							*(_DWORD*)(v10 + 8) = 0;
							_InterlockedExchange64((volatile __int64*)(v10 + 16), 0i64);
							if (*(_QWORD*)(v10 + 24))
							{
								if (!*(_QWORD*)(v10 + 32))
								{
									EventW = CreateEventW(0i64, 0, 0, 0i64);
									if (_InterlockedCompareExchange64(
										(volatile signed __int64*)(v10 + 32),
										(signed __int64)EventW,
										0i64))
									{
										CloseHandle(EventW);
									}
								}
								SetEvent(*(HANDLE*)(v10 + 32));
							}
						}
						else
						{
							--* (_QWORD*)(v10 + 16);
						}
						if (v15)
							sub_1401C89C0(v14, v5, v15, v9);
						else
							*(_DWORD*)(v5 + 4) = 0;
						if (*(_DWORD*)(a1 + 40) == 4)
							return 1i64;
						if (!*(_DWORD*)(v5 + 4))
							goto LABEL_37;
					}
					else
					{
						Sleep(0);
					}
				}
				return 1i64;
			}
			else
			{
			LABEL_37:
				v18 = *(_QWORD*)(a1 + 32);
				if (*a2)
					v8 = sub_14001C520(a2);
				return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 32i64))(v18, v8);
			}
		}
	}
	else
	{
		v19 = *(_QWORD*)(a1 + 32);
		if (*a2)
		{
			v20 = sub_14001C520(a2);
			return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 32i64))(v19, v20);
		}
		else
		{
			return (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v19 + 32i64))(*(_QWORD*)(a1 + 32), 0i64);
		}
	}
}
// 1401C7DDF: variable 'v14' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A23C: using guessed type _DWORD dword_140C8A23C;

