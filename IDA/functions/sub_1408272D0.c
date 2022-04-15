//----- (00000001408272D0) ----------------------------------------------------
BOOL __fastcall sub_1408272D0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
	*(_DWORD*)a5 = a3;
	*(_DWORD*)(a5 + 16) = a4;
	return SetEvent(*(HANDLE*)(a5 + 8));
}

