//----- (00000001400CAE90) ----------------------------------------------------
__int64 __fastcall sub_1400CAE90(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // r10
	_QWORD* v3; // r8
	__int64 v4; // r9
	__int64 v5; // rcx
	_QWORD* v6; // rax
	_QWORD* v7; // rdx
	_QWORD* v8; // rdx
	__int64 v9; // r9

	v1 = (_QWORD*)a1[70];
	v2 = a1;
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v3[2];
			if ((*(_BYTE*)(v4 + 392) & 1) == 0)
			{
				v5 = *(_QWORD*)(v4 + 16);
				*(_BYTE*)(v4 + 29) &= ~0x80u;
				*(_BYTE*)(v4 + 30) &= ~1u;
				if (v5 && (*(_BYTE*)(v5 + 30) & 1) != 0)
					sub_1400CB660(v5);
				*(_DWORD*)(v4 + 392) |= 3u;
				*(_QWORD*)(v4 + 384) = -1i64;
				v6 = *(_QWORD**)(v4 + 560);
				v7 = (_QWORD*)*v6;
				if ((_QWORD*)*v6 != v6)
				{
					do
					{
						sub_1400CB690(v7[2]);
						v7 = (_QWORD*)*v8;
					} while (v7 != *(_QWORD**)(v9 + 560));
				}
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != (_QWORD*)v2[70]);
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*v2 + 400i64))(v2);
}
// 1400CAEDC: variable 'v4' is possibly undefined
// 1400CAF09: variable 'v8' is possibly undefined
// 1400CAF0C: variable 'v9' is possibly undefined
// 1400CAF15: variable 'v3' is possibly undefined
// 1400CAF18: variable 'v2' is possibly undefined

