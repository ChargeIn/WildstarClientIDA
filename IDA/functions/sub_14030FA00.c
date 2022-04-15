//----- (000000014030FA00) ----------------------------------------------------
__int64 __fastcall sub_14030FA00(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // edi
	__int64 v4; // r11
	__int64 v5; // r10
	unsigned __int16 v6; // ax
	__int64 v7; // rdx
	unsigned __int8* v8; // rax
	__int16 v9; // r9
	unsigned __int8* v10; // rax
	__int16 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h]

	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 160) + 56i64))(
		*(_QWORD*)(a1 + 160),
		0i64,
		0i64,
		2i64);
	if (result)
	{
		v3 = 0;
		if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64))
		{
			v4 = result + 12;
			do
			{
				v5 = v3;
				v4 += 32i64;
				v6 = *(_WORD*)(v3 * *(_QWORD*)(a1 + 320) + *(_QWORD*)(a1 + 232));
				v7 = *(_QWORD*)(a1 + 216) + *(_QWORD*)(a1 + 304) * v3;
				LODWORD(v13) = *(_DWORD*)v7;
				WORD2(v13) = *(_WORD*)(v7 + 4);
				HIWORD(v13) = (unsigned __int8)v6 + ((HIBYTE(v6) - 128) << 8);
				*(_QWORD*)(v4 - 44) = v13;
				v8 = (unsigned __int8*)(*(_QWORD*)(a1 + 240) + *(_QWORD*)(a1 + 328) * v3);
				v9 = *v8 + (v8[1] << 8);
				v10 = (unsigned __int8*)(*(_QWORD*)(a1 + 224) + *(_QWORD*)(a1 + 312) * v3);
				v11 = *v10 + (v10[1] << 8);
				*(_DWORD*)(v4 - 36) = (unsigned __int8)v9
					+ ((unsigned __int8)v11 << 16)
					+ (HIBYTE(v11) << 8)
					+ (HIBYTE(v9) << 24);
				*(_DWORD*)(v4 - 32) = *(_DWORD*)(*(_QWORD*)(a1 + 368) * v3 + *(_QWORD*)(a1 + 280));
				*(_DWORD*)(v4 - 28) = *(_DWORD*)(v3 * *(_QWORD*)(a1 + 336) + *(_QWORD*)(a1 + 248));
				v12 = *(_QWORD*)(a1 + 344) * v3++;
				*(_DWORD*)(v4 - 24) = *(_DWORD*)(v12 + *(_QWORD*)(a1 + 256));
				*(_DWORD*)(v4 - 20) = *(_DWORD*)(v5 * *(_QWORD*)(a1 + 352) + *(_QWORD*)(a1 + 264));
				*(_DWORD*)(v4 - 16) = *(_DWORD*)(*(_QWORD*)(a1 + 360) * v5 + *(_QWORD*)(a1 + 272));
			} while (v3 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64));
		}
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 64i64))(*(_QWORD*)(a1 + 160));
	}
	return result;
}

