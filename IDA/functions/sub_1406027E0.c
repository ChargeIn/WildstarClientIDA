//----- (00000001406027E0) ----------------------------------------------------
__int64 __fastcall sub_1406027E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rbx
	__int64 v6; // rdx
	char* v7; // rcx
	__int64 v8; // rbx
	__int16 v9; // ax
	__int64 v11; // rbx
	unsigned __int64 v12[2]; // [rsp+40h] [rbp-88h] BYREF
	char v13[80]; // [rsp+50h] [rbp-78h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), a2 + 16, v12))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v12[0]);
			if (v5)
			{
				if (*(_DWORD*)(v5 + 16) == *(_DWORD*)(qword_140C635F0 + 5760))
					sub_1405E2530(qword_140C65898 + 26680, (_QWORD*)(v5 + 16), v5 + 32);
				v6 = 33i64;
				v7 = v13;
				v8 = v5 - (_QWORD)v13;
				while (v6 != -2147483613)
				{
					v9 = *(_WORD*)&v7[v8 + 32];
					if (!v9)
						break;
					*(_WORD*)v7 = v9;
					v7 += 2;
					if (!--v6)
					{
						v7 -= 2;
						break;
					}
				}
				*(_WORD*)v7 = 0;
				sub_14079ED20(*(_QWORD*)(a1 + 64), a2 + 16);
				sub_14079EE60(*(_QWORD*)(a1 + 64), a1 + 80, (unsigned __int64*)(*(_QWORD*)(a1 + 64) + 104i64));
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_Remove", byte_1409EA034, v13, *(_DWORD*)(a2 + 32));
			}
		}
		return 0i64;
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 72);
		if (v11
			&& *(_QWORD*)(v11 + 72) == *(_QWORD*)a2
			&& sub_14079EE60(*(_QWORD*)(a1 + 72), a2 + 16, v12)
			&& *(_QWORD*)(*(_QWORD*)(v11 + 88) + 8 * v12[0]))
		{
			sub_14079ED20(*(_QWORD*)(a1 + 72), a2 + 16);
			sub_14079EE60(*(_QWORD*)(a1 + 72), a1 + 80, (unsigned __int64*)(*(_QWORD*)(a1 + 72) + 104i64));
		}
		return 0i64;
	}
}
// 1406028D7: conditional instruction was optimized away because rdx.8!=0
// 1409EA034: using guessed type _BYTE byte_1409EA034[32];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

