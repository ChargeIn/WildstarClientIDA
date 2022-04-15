#include "../winhttp.h"

//----- (000000014033C7E0) ----------------------------------------------------
__int64 __fastcall sub_14033C7E0(__int64 a1, _QWORD* a2, int a3)
{
	int* v3; // rbx
	int CurrentThreadId; // eax
	int v7; // ecx
	volatile signed __int64* v8; // rsi
	unsigned int v9; // ebx
	__int64 v10; // rcx
	unsigned __int32 v11; // eax
	DWORD v12; // r15d
	__int64 lpOverlapped; // rbp
	CHAR** p_buf; // r13
	_QWORD* v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // r8
	int v19; // edx
	int v20; // edx
	int v21; // ebx
	int Error; // eax
	int v23; // r13d
	__int64 v24; // r8
	HANDLE EventW; // rcx
	__int64 v27; // [rsp+40h] [rbp-188h]
	unsigned int v28; // [rsp+48h] [rbp-180h]
	__int64 v29; // [rsp+50h] [rbp-178h] BYREF
	int v30; // [rsp+58h] [rbp-170h]
	__int64* v31; // [rsp+60h] [rbp-168h]
	_QWORD* v32; // [rsp+68h] [rbp-160h] BYREF
	DWORD NumberOfBytesSent[4]; // [rsp+70h] [rbp-158h] BYREF
	struct _WSABUF Buffers; // [rsp+80h] [rbp-148h] BYREF

	v3 = (int*)(a2 + 36);
	v30 = a3;
	v27 = (__int64)(a2 + 36);
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v3;
	v8 = (volatile signed __int64*)(v27 + 8);
	v9 = 1;
	if (v7 == CurrentThreadId)
	{
		++* v8;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(v8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v27, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v27 = CurrentThreadId;
	}
LABEL_8:
	if (a2[48])
	{
		v11 = _InterlockedIncrement((volatile signed __int32*)(a1 + 332));
		if (v11 > *(_DWORD*)(a1 + 348))
			*(_DWORD*)(a1 + 348) = v11;
		sub_1407E4830((int*)&Buffers, 0i64, 0x100ui64);
		v12 = 0;
		v28 = 0;
		lpOverlapped = sub_14033AFE0(a2, 3);
		p_buf = &Buffers.buf;
		v31 = (__int64*)(lpOverlapped + 56);
		do
		{
			v15 = (_QWORD*)a2[48];
			if (!v15)
				break;
			v16 = *(unsigned int*)(lpOverlapped + 48);
			if ((unsigned int)v16 >= 0x10)
				break;
			*(_QWORD*)(lpOverlapped + 8 * v16 + 56) = v15;
			++* (_DWORD*)(lpOverlapped + 48);
			sub_140337DE0(v15);
			++v12;
			p_buf += 2;
			v17 = *v31;
			v19 = *(_DWORD*)(*v31++ + 32);
			v18 = (__int64)v31;
			v20 = v19 - *(_DWORD*)(v17 + 16);
			v28 += v20;
			*((_DWORD*)p_buf - 6) = v20;
			*(p_buf - 2) = *(CHAR**)(*(_QWORD*)(v18 - 8) + 16i64);
		} while (v12 < 0x10);
		if (!v30 || a2[48])
			v9 = 0;
		*(_DWORD*)(lpOverlapped + 184) = v9;
		v21 = WSASend(a2[34], &Buffers, v12, NumberOfBytesSent, 0, (LPWSAOVERLAPPED)lpOverlapped, 0i64);
		Error = WSAGetLastError();
		v23 = Error;
		if (!v21 || Error == 997)
		{
			v9 = 0;
			a2[55] += v28;
			a2[59] += v12;
			++a2[58];
		}
		else
		{
			sub_14018D540(&v29, (__int64)L"SendBuffersOverlapped->WSASend [%d buffers]", v12);
			v24 = (__int64)(a2 + 18);
			if (v23 == 10058)
				sub_14033BA50(
					v29,
					3,
					v24,
					L"Error 10058 [[A request to send or receive data was disallowed because the socket hd alredy been shut down in "
					"that direction with a previous shutdown call. (8007274a)]]");
			else
				sub_14033B860(v29, v23, v24);
			v32 = a2;
			(*(void(__fastcall**)(_QWORD*)) * a2)(a2);
			(*(void(__fastcall**)(__int64, _QWORD**))(*(_QWORD*)a1 + 24i64))(a1, &v32);
			sub_14033B690(a1, 4, (__int64)a2);
			sub_14033B1D0((__int64)a2, lpOverlapped);
			_InterlockedDecrement((volatile signed __int32*)(a1 + 332));
			if (v29)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
			v9 = -2147467259;
		}
	}
	if (*v8 <= 1ui64)
	{
		*(_DWORD*)v27 = 0;
		_InterlockedExchange64(v8, 0i64);
		if (*(_QWORD*)(v27 + 16))
		{
			if (!*(_QWORD*)(v27 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v27 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v27 + 24));
		}
	}
	else
	{
		--* v8;
	}
	return v9;
}
// 140AF3180: using guessed type wchar_t aSendbuffersove[44];
// 140AF31F0: using guessed type wchar_t aError10058AReq[169];
// 14033C7E0: using guessed type DWORD NumberOfBytesSent[4];

