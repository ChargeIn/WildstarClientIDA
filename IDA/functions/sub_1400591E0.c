//----- (00000001400591E0) ----------------------------------------------------
void* __fastcall sub_1400591E0(__int64 a1)
{
	_DWORD* v1; // rax
	__int64 v2; // r10
	__int64 v3; // r11
	__int64 v4; // rdx
	void* result; // rax
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rdx

	v1 = sub_1400580E0(a1, 1);
	if (v1[2] == 6)
	{
		v4 = *(_QWORD*)v1;
		if (*(_BYTE*)(*(_QWORD*)v1 + 10i64))
		{
			if ((int)v2 >= 1 && (int)v2 <= *(unsigned __int8*)(v4 + 11))
			{
				result = &unk_140C635FD;
				v6 = 16i64 * ((int)v2 - 1) + v4 + 40;
			LABEL_9:
				v8 = *(_QWORD*)(v3 + 16);
				*(_QWORD*)v8 = *(_QWORD*)v6;
				*(_DWORD*)(v8 + 8) = *(_DWORD*)(v6 + 8);
				*(_QWORD*)(v3 + 16) += 16i64;
				return result;
			}
		}
		else
		{
			v7 = *(_QWORD*)(v4 + 32);
			if ((int)v2 >= 1 && (int)v2 <= *(_DWORD*)(v7 + 72))
			{
				v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8 * v2 + 32) + 16i64);
				result = (void*)(*(_QWORD*)(*(_QWORD*)(v7 + 56) + 8 * v2 - 8) + 32i64);
				if (*(_QWORD*)(*(_QWORD*)(v7 + 56) + 8 * v2 - 8) == -32i64)
					return result;
				goto LABEL_9;
			}
		}
	}
	return 0i64;
}
// 140059207: variable 'v2' is possibly undefined
// 140059258: variable 'v3' is possibly undefined

