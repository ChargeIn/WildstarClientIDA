//----- (00000001408C0280) ----------------------------------------------------
__int64 __fastcall sub_1408C0280(__int64 a1, __int64 a2)
{
	char v2; // al
	__int64 result; // rax

	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 12);
	*(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 16);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 17);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 21);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 25);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 29);
	*(_BYTE*)(a1 + 44) = *(_BYTE*)(a2 + 33);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 34);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 38);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 42);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 46);
	*(_BYTE*)(a1 + 64) = *(_BYTE*)(a2 + 50);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 51);
	v2 = *(_BYTE*)(a2 + 55);
	*(_WORD*)(a1 + 76) = 257;
	*(_BYTE*)(a1 + 72) = v2;
	result = 1i64;
	*(_BYTE*)(a1 + 78) = 1;
	return result;
}

