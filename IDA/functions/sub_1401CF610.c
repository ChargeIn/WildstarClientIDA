#include "../winhttp.h"

//----- (00000001401CF610) ----------------------------------------------------
__int64 __fastcall sub_1401CF610(__int64 a1)
{
	void* v2; // rcx
	char* Pointer; // rdi
	int* i; // rsi
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // rbx
	__int64 v7; // rbx
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	HANDLE EventW; // rcx
	__int64 v11; // rax
	int v13; // [rsp+40h] [rbp-58h] BYREF
	__int64 v14; // [rsp+48h] [rbp-50h]
	void(__fastcall * v15)(__int64); // [rsp+50h] [rbp-48h]
	__int64 v16; // [rsp+58h] [rbp-40h]
	DWORD NumberOfBytesTransferred; // [rsp+A0h] [rbp+8h] BYREF
	unsigned __int64 CompletionKey; // [rsp+A8h] [rbp+10h] BYREF
	LPOVERLAPPED Overlapped; // [rsp+B0h] [rbp+18h] BYREF

	while (1)
	{
		do
		{
			v2 = *(void**)(a1 + 80);
			CompletionKey = 0i64;
			Overlapped = 0i64;
		} while (!GetQueuedCompletionStatus(v2, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF));
		if (!CompletionKey || !Overlapped)
			return 0i64;
		Pointer = (char*)Overlapped->Pointer;
		if (Overlapped == (LPOVERLAPPED)(Pointer + 1104))
		{
			sub_1401CEE70((__int64)Overlapped->Pointer);
		}
		else
		{
			if (NumberOfBytesTransferred)
			{
				for (i = (int*)*((_QWORD*)Pointer + 135); ; i = (int*)((char*)i + v11))
				{
					v5 = (unsigned __int64)(unsigned int)i[2] >> 1;
					if (v5 < *((_QWORD*)Pointer + 134))
					{
						v6 = 2 * v5;
						sub_1407DB590(*((int**)Pointer + 133), i + 3, v6);
						*(_WORD*)(v6 + *((_QWORD*)Pointer + 133)) = 0;
						v7 = *(_QWORD*)Pointer;
						CurrentThreadId = GetCurrentThreadId();
						if (*(_DWORD*)(v7 + 104) == CurrentThreadId)
						{
							++* (_QWORD*)(v7 + 112);
						}
						else
						{
							v9 = 0i64;
							while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 112), 1i64, 0i64))
							{
								_mm_pause();
								if ((unsigned __int64)++v9 >= 0x400)
								{
									sub_14019FB60(v7 + 104, CurrentThreadId);
									goto LABEL_16;
								}
							}
							*(_DWORD*)(v7 + 104) = CurrentThreadId;
						}
					LABEL_16:
						sub_1401CE3E0(*(__int64**)(*(_QWORD*)Pointer + 96i64), *((int**)Pointer + 132));
						if (*(_QWORD*)(v7 + 112) <= 1ui64)
						{
							*(_DWORD*)(v7 + 104) = 0;
							_InterlockedExchange64((volatile __int64*)(v7 + 112), 0i64);
							if (*(_QWORD*)(v7 + 120))
							{
								if (!*(_QWORD*)(v7 + 128))
								{
									EventW = CreateEventW(0i64, 0, 0, 0i64);
									if (_InterlockedCompareExchange64(
										(volatile signed __int64*)(v7 + 128),
										(signed __int64)EventW,
										0i64))
									{
										CloseHandle(EventW);
									}
								}
								SetEvent(*(HANDLE*)(v7 + 128));
							}
						}
						else
						{
							--* (_QWORD*)(v7 + 112);
						}
						v14 = *(_QWORD*)Pointer;
						v13 = 0;
						v15 = sub_1401CF820;
						v16 = 0i64;
						sub_140195960(v14 + 8, 2500, (__int64)&v13, 4);
					}
					v11 = (unsigned int)*i;
					if (!(_DWORD)v11)
						break;
				}
			}
			sub_1401CF0C0((__int64)Pointer);
		}
	}
}

