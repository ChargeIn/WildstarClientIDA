//----- (00000001400FD890) ----------------------------------------------------
__int64 __fastcall sub_1400FD890(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax

	*(_BYTE*)(a1 + 96) = 1;
	*(_OWORD*)(a1 + 112) = *(_OWORD*)a3;
	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a3 + 16);
	*(_QWORD*)(a1 + 136) = *(_QWORD*)(a3 + 24);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a3 + 32);
	*(_QWORD*)(a1 + 152) = *(_QWORD*)(a3 + 40);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a3 + 48);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a3 + 52);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a3 + 56);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a3 + 60);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a3 + 64);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a3 + 68);
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a3 + 72);
	*(_DWORD*)(a1 + 188) = *(_DWORD*)(a3 + 76);
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a3 + 80);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)a4;
	*(_QWORD*)(a1 + 224) = *(_QWORD*)(a4 + 16);
	*(_QWORD*)(a1 + 232) = *(_QWORD*)(a4 + 24);
	*(_QWORD*)(a1 + 240) = *(_QWORD*)(a4 + 32);
	*(_QWORD*)(a1 + 248) = *(_QWORD*)(a4 + 40);
	*(_DWORD*)(a1 + 256) = *(_DWORD*)(a4 + 48);
	*(_DWORD*)(a1 + 260) = *(_DWORD*)(a4 + 52);
	*(_DWORD*)(a1 + 264) = *(_DWORD*)(a4 + 56);
	*(_DWORD*)(a1 + 268) = *(_DWORD*)(a4 + 60);
	*(_DWORD*)(a1 + 272) = *(_DWORD*)(a4 + 64);
	*(_DWORD*)(a1 + 276) = *(_DWORD*)(a4 + 68);
	*(_DWORD*)(a1 + 280) = *(_DWORD*)(a4 + 72);
	*(_DWORD*)(a1 + 284) = *(_DWORD*)(a4 + 76);
	result = *(unsigned int*)(a4 + 80);
	*(_DWORD*)(a1 + 288) = result;
	return result;
}

