#include "../winhttp.h"

//----- (0000000140343380) ----------------------------------------------------
int __fastcall sub_140343380(__int64 a1, float(__fastcall* a2)(char*, __int64, __int64))
{
	void** v2; // rax
	__int64 v3; // rdi
	unsigned int v5; // esi
	__int64 v7; // rbp
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int128 v11; // xmm1
	__int64 v12; // rcx
	float v13; // xmm0_4
	__int64 v14; // rcx
	HANDLE EventW; // rcx
	__int128 v17[2]; // [rsp+30h] [rbp-68h] BYREF
	char v18[32]; // [rsp+50h] [rbp-48h] BYREF
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF

	v2 = &retaddr;
	v3 = qword_140C7A0C0;
	v5 = ++dword_140C65864;
	if (qword_140C7A0C0)
	{
		while (1)
		{
			v7 = *(_QWORD*)(v3 + 40);
			CurrentThreadId = GetCurrentThreadId();
			if ((_DWORD)qword_140C7A070 == CurrentThreadId)
			{
				++qword_140C7A078;
			}
			else
			{
				v9 = 0i64;
				while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v9 >= 0x400)
					{
						sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
						goto LABEL_9;
					}
				}
				LODWORD(qword_140C7A070) = CurrentThreadId;
			}
		LABEL_9:
			if (*(_DWORD*)(v3 + 128) || *(_QWORD*)(v3 + 112))
			{
				v12 = *(_QWORD*)(v3 + 112);
				if (v12)
				{
					sub_140341B40(v12, a1, v5, (float(__fastcall*)(_QWORD, _QWORD, _QWORD))a2);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65858 + 296i64))(
						qword_140C65858,
						v7,
						*(_QWORD*)(*(_QWORD*)(v3 + 112) + 40i64),
						*(_QWORD*)(*(_QWORD*)(v3 + 112) + 48i64),
						*(_DWORD*)(*(_QWORD*)(v3 + 112) + 72i64));
				}
				else
				{
					v13 = a2(v18, v3 + 80, a1);
					v14 = qword_140C65858;
					*(float*)(v3 + 124) = v13;
					(*(void(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)v14 + 288i64))(v14, v7, v18);
				}
			}
			else
			{
				v10 = qword_140C65858;
				*(_DWORD*)(v3 + 124) = 0;
				v11 = *(_OWORD*)(a1 + 16);
				v17[1] = *(_OWORD*)(a1 + 32);
				v17[0] = v11;
				(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)v10 + 288i64))(v10, v7, v17);
			}
			LODWORD(v2) = qword_140C7A078;
			if ((unsigned __int64)qword_140C7A078 <= 1)
			{
				LODWORD(qword_140C7A070) = 0;
				LODWORD(v2) = _InterlockedExchange64(&qword_140C7A078, 0i64);
				if (qword_140C7A080)
				{
					if (!qword_140C7A088)
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64(
							(volatile signed __int64*)&qword_140C7A088,
							(signed __int64)EventW,
							0i64))
						{
							CloseHandle(EventW);
						}
					}
					LODWORD(v2) = SetEvent(qword_140C7A088);
				}
			}
			else
			{
				--qword_140C7A078;
			}
			v3 = *(_QWORD*)(v3 + 56);
			if (!v3)
				break;
			v5 = dword_140C65864;
		}
	}
	return (int)v2;
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C65864: using guessed type int dword_140C65864;
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;
// 140C7A0C0: using guessed type __int64 qword_140C7A0C0;

