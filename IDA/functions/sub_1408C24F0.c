//----- (00000001408C24F0) ----------------------------------------------------
__int64 __fastcall sub_1408C24F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	char v6; // al
	int v7; // ecx
	int i; // edx
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a2;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	v7 = 0;
	*(_BYTE*)(a1 + 580) = v6;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v7;
	*(_DWORD*)(a1 + 568) = v7;
	sub_1408C34A0(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 480));
	if (*(_BYTE*)(a1 + 580))
		*(_DWORD*)(a1 + 504) = 0;
	*(_DWORD*)(a1 + 520) = *(_DWORD*)(a1 + 480);
	*(_DWORD*)(a1 + 524) = *(_DWORD*)(a1 + 484);
	*(_DWORD*)(a1 + 528) = *(_DWORD*)(a1 + 488);
	*(_DWORD*)(a1 + 532) = *(_DWORD*)(a1 + 492);
	*(_DWORD*)(a1 + 536) = *(_DWORD*)(a1 + 496);
	*(_DWORD*)(a1 + 540) = *(_DWORD*)(a1 + 500);
	*(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 504);
	*(_DWORD*)(a1 + 548) = *(_DWORD*)(a1 + 508);
	*(_DWORD*)(a1 + 552) = *(_DWORD*)(a1 + 512);
	*(_DWORD*)(a1 + 556) = *(_DWORD*)(a1 + 516);
	*(_DWORD*)(a1 + 572) = *a5;
	sub_1408C29E0(a1, a5[1] & 0x3FFFF);
	*(_DWORD*)(a1 + 576) = (int)(float)((float)(*(float*)(a1 + 512) * 0.001) * (float)*(int*)(a1 + 572));
	result = sub_1408C2B60(a1);
	if ((_DWORD)result == 1)
	{
		result = sub_1408C2C80(a1);
		if ((_DWORD)result == 1)
		{
			*(_WORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0;
			return 1i64;
		}
	}
	return result;
}

