//----- (00000001408C4190) ----------------------------------------------------
__int64 __fastcall sub_1408C4190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	int v7; // eax
	char v8; // al
	__int64 v9; // rcx
	char v10; // dl
	char v11; // al
	__int64 result; // rax

	v7 = *a5;
	*(_QWORD*)(a1 + 328) = a4;
	*(_QWORD*)(a1 + 336) = a2;
	*(_DWORD*)(a1 + 292) = v7;
	*(_DWORD*)(a1 + 288) = *(_DWORD*)(a4 + 116);
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	*(_BYTE*)(a1 + 301) = v8;
	if (v8)
		*(_DWORD*)(*(_QWORD*)(a1 + 328) + 76i64) = 0;
	v9 = *(_QWORD*)(a1 + 328);
	*(_DWORD*)(a1 + 344) = *(_DWORD*)(v9 + 8);
	*(_DWORD*)(a1 + 348) = *(_DWORD*)(v9 + 12);
	*(_DWORD*)(a1 + 352) = *(_DWORD*)(v9 + 16);
	*(_DWORD*)(a1 + 356) = *(_DWORD*)(v9 + 20);
	*(_DWORD*)(a1 + 360) = *(_DWORD*)(v9 + 24);
	*(_DWORD*)(a1 + 364) = *(_DWORD*)(v9 + 28);
	*(_DWORD*)(a1 + 368) = *(_DWORD*)(v9 + 32);
	*(_DWORD*)(a1 + 372) = *(_DWORD*)(v9 + 36);
	*(_DWORD*)(a1 + 376) = *(_DWORD*)(v9 + 40);
	*(_DWORD*)(a1 + 380) = *(_DWORD*)(v9 + 44);
	*(_DWORD*)(a1 + 384) = *(_DWORD*)(v9 + 48);
	*(_DWORD*)(a1 + 388) = *(_DWORD*)(v9 + 52);
	*(_DWORD*)(a1 + 392) = *(_DWORD*)(v9 + 56);
	*(_DWORD*)(a1 + 396) = *(_DWORD*)(v9 + 60);
	*(_DWORD*)(a1 + 400) = *(_DWORD*)(v9 + 64);
	*(_DWORD*)(a1 + 404) = *(_DWORD*)(v9 + 68);
	*(_DWORD*)(a1 + 408) = *(_DWORD*)(v9 + 72);
	*(_DWORD*)(a1 + 412) = *(_DWORD*)(v9 + 76);
	*(_DWORD*)(a1 + 416) = *(_DWORD*)(v9 + 80);
	*(_DWORD*)(a1 + 420) = *(_DWORD*)(v9 + 84);
	*(_DWORD*)(a1 + 424) = *(_DWORD*)(v9 + 88);
	v10 = *(_BYTE*)(v9 + 153) != 0 ? 2 : 0;
	*(_BYTE*)(a1 + 300) = v10;
	v11 = v10;
	if ((a5[1] & 0x3FFFF) == 8)
		v11 = 0;
	*(_BYTE*)(a1 + 300) = v11;
	sub_1408C47D0(a1);
	result = sub_1408C8E10(a1);
	if ((_DWORD)result == 1)
	{
		result = sub_1408C8AB0(a1, a2);
		if ((_DWORD)result == 1)
		{
			result = sub_1408C8800(a1, a2);
			if ((_DWORD)result == 1)
			{
				result = sub_1408C8DC0(a1, a2);
				if ((_DWORD)result == 1)
				{
					result = sub_1408C8980(a1, a2);
					if ((_DWORD)result == 1)
					{
						result = sub_1408C88D0(a1, a2, *((_BYTE*)a5 + 4));
						if ((_DWORD)result == 1)
						{
							result = sub_1408C86D0(a1, a2);
							if ((_DWORD)result == 1)
							{
								*(_DWORD*)(a1 + 280) = (int)(float)((float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 96i64) * 0.001)
									+ *(float*)(*(_QWORD*)(a1 + 328) + 8i64))
									* (float)*(int*)(a1 + 292));
								return 1i64;
							}
						}
					}
				}
			}
		}
	}
	return result;
}

