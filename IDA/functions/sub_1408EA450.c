//----- (00000001408EA450) ----------------------------------------------------
__int64 __fastcall sub_1408EA450(__int64 a1, int a2, char a3)
{
	int v3; // eax
	unsigned int v4; // edi
	unsigned int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rax
	__int16 v9; // r8
	unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

	v3 = a2;
	v4 = 1;
	LOWORD(a2) = 0;
	if (v3 == 1)
	{
		if (a3)
		{
			v6 = sub_1408EA070(a1);
		}
		else
		{
			if ((unsigned int)sub_1408EB730(a1 + 88, *(_DWORD*)(a1 + 44), (unsigned int*)(a1 + 44), &v11) == 1)
			{
				*(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 360) + v11;
			LABEL_8:
				v7 = *(_QWORD*)(a1 + 24);
				if ((*(_BYTE*)(v7 + 383) & 2) != 0)
					a2 = 0;
				else
					a2 = *(_DWORD*)(v7 + 372);
				*(_BYTE*)(v7 + 383) &= 0xF1u;
				*(_DWORD*)(v7 + 372) = 0;
				*(_DWORD*)(a1 + 44) += a2;
				goto LABEL_14;
			}
			*(_DWORD*)(a1 + 44) = 0;
			v6 = sub_1408EA560(a1, (unsigned int*)(a1 + 44));
		}
		v4 = v6;
		goto LABEL_8;
	}
	if (v3)
		return v4;
	v8 = *(unsigned int*)(a1 + 304);
	*(_DWORD*)(a1 + 44) = 0;
	*(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 360) + v8;
	*(_WORD*)(a1 + 84) = *(_WORD*)(*(_QWORD*)(a1 + 24) + 376i64);
LABEL_14:
	if (*(_WORD*)(a1 + 84) == 1)
		v9 = *(_WORD*)(a1 + 310);
	else
		v9 = *(_WORD*)(a1 + 298);
	sub_1408EBAE0(a1 + 104, a2, v9);
	*(_DWORD*)(a1 + 96) = 3;
	return v4;
}

