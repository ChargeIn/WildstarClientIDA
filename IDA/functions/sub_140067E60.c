//----- (0000000140067E60) ----------------------------------------------------
__int64 __fastcall sub_140067E60(__int64 a1, int* a2, unsigned int a3)
{
	__int64 v3; // rax
	int v6; // eax
	int v7; // edi
	bool v8; // zf
	__int64 v9; // rax
	int v10; // edi
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // ebp
	char v17[24]; // [rsp+28h] [rbp-40h] BYREF

	v3 = *(_QWORD*)(a1 + 56);
	if (++ * (_WORD*)(v3 + 96) > 0xC8u)
		sub_140062CF0(a1, aChunkHasTooMan_0, 0);
	v6 = *(_DWORD*)(a1 + 16);
	switch (v6)
	{
	case 35:
		v7 = 2;
		break;
	case 45:
		v7 = 0;
		break;
	case 270:
		v7 = 1;
		break;
	default:
		sub_140067A50(a1, (__int64)a2);
		goto LABEL_13;
	}
	v8 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v8)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v9 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v9;
	}
	sub_140067E60(a1, a2, 8i64);
	sub_14006B5E0(*(_QWORD*)(a1 + 48), v7, (__int64)a2);
LABEL_13:
	v10 = sub_140067CA0(*(_DWORD*)(a1 + 16));
	if (v10 != 15)
	{
		while (1)
		{
			v11 = 2i64 * v10;
			if (byte_140A12708[v11] <= a3)
				goto LABEL_33;
			v8 = *(_DWORD*)(a1 + 32) == 287;
			*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
			if (v8)
			{
				*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
			}
			else
			{
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
				v12 = *(_QWORD*)(a1 + 40);
				*(_DWORD*)(a1 + 32) = 287;
				*(_QWORD*)(a1 + 24) = v12;
			}
			v13 = *(_QWORD*)(a1 + 48);
			if (v10 < 0)
				goto LABEL_29;
			if (v10 <= 5)
				break;
			switch (v10)
			{
			case 6:
				sub_14006AAE0(v13, a2);
				break;
			case 13:
				sub_14006B020(v13, a2);
				break;
			case 14:
				sub_14006B0C0(v13, a2);
				break;
			default:
				goto LABEL_29;
			}
		LABEL_30:
			v14 = sub_140067E60(a1, v17, byte_140A12708[v11 + 1]);
			if ((unsigned int)v10 <= 0xE)
				sub_14006B720(*(__int64**)(a1 + 48), (__int64)a2, (__int64)v17, v10);
			v10 = v14;
			if (v14 == 15)
				goto LABEL_33;
		}
		if (*a2 == 5 && a2[4] == -1 && a2[5] == -1)
			goto LABEL_30;
	LABEL_29:
		sub_14006ABD0(v13, (__int64)a2);
		goto LABEL_30;
	}
LABEL_33:
	--* (_WORD*)(*(_QWORD*)(a1 + 56) + 96i64);
	return (unsigned int)v10;
}
// 140A12708: using guessed type unsigned __int8 byte_140A12708[76];

