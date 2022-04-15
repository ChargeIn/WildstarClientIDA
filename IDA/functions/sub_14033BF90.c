//----- (000000014033BF90) ----------------------------------------------------
__int64 __fastcall sub_14033BF90(__int64 a1, _QWORD* a2)
{
	unsigned __int32 v4; // eax
	struct _OVERLAPPED* lpOverlapped; // rbx
	ULONG* v6; // rax
	CHAR* v7; // rdx
	SOCKET v8; // rcx
	int Error; // eax
	struct _WSABUF Buffers; // [rsp+40h] [rbp-18h] BYREF
	DWORD Flags; // [rsp+60h] [rbp+8h] BYREF
	DWORD NumberOfBytesRecvd; // [rsp+68h] [rbp+10h] BYREF

	v4 = _InterlockedIncrement((volatile signed __int32*)(a1 + 336));
	if (v4 > *(_DWORD*)(a1 + 352))
		*(_DWORD*)(a1 + 352) = v4;
	lpOverlapped = (struct _OVERLAPPED*)sub_14033AFE0(a2, 2);
	v6 = (ULONG*)sub_140338550(a2 + 40);
	lpOverlapped[1].Offset = 1;
	lpOverlapped[1].hEvent = v6;
	Buffers.len = v6[2];
	v7 = (CHAR*)*((_QWORD*)lpOverlapped[1].hEvent + 2);
	v8 = a2[34];
	Flags = 0;
	Buffers.buf = v7;
	LODWORD(lpOverlapped) = WSARecv(v8, &Buffers, 1u, &NumberOfBytesRecvd, &Flags, lpOverlapped, 0i64);
	Error = WSAGetLastError();
	if ((_DWORD)lpOverlapped != -1 || Error == 997)
		return 0i64;
	sub_14033B860((__int64)L"WSARecv", Error, (__int64)(a2 + 18));
	_InterlockedDecrement((volatile signed __int32*)(a1 + 336));
	return 2147500037i64;
}
// 140AF2E00: using guessed type wchar_t aWsarecv[8];

