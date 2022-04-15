//----- (000000014082EAB0) ----------------------------------------------------
void __fastcall sub_14082EAB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5)
{
	_QWORD* v5; // rbx
	_QWORD* v6; // r15
	unsigned __int8 v7; // al
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rdx
	__int64 v15; // rcx
	int v16; // eax
	__int64 v17; // rax
	_QWORD* v18; // [rsp+30h] [rbp-48h]

	v5 = *(_QWORD**)(a1 + 144);
	v6 = 0i64;
	v7 = a4;
	if (v5)
	{
		while (1)
		{
			v11 = v5[2];
			v12 = sub_140855940(*(_QWORD*)(v11 + 8));
			v13 = v12;
			if (a2)
			{
				if (!v12)
					goto LABEL_18;
				if (a2 != v12)
				{
					v14 = *(_QWORD*)(v12 + 64);
					v15 = *(_QWORD*)(v12 + 72);
					if (v14)
					{
						while (a2 != v14)
						{
							if (!v15)
								v15 = *(_QWORD*)(v14 + 72);
							v14 = *(_QWORD*)(v14 + 64);
							if (!v14)
								goto LABEL_10;
						}
					}
					else
					{
					LABEL_10:
						if (!v15)
							goto LABEL_18;
						while (a2 != v15)
						{
							v15 = *(_QWORD*)(v15 + 72);
							if (!v15)
							{
								v6 = v5;
								v5 = (_QWORD*)*v5;
								goto LABEL_28;
							}
						}
					}
				}
			}
			if ((!a3 || a3 == *(_QWORD*)(v11 + 72)) && (!a5 || a5 == *(_DWORD*)(v11 + 56)))
			{
				if (a4 || (v16 = *(_DWORD*)(v11 + 64)) == 0)
				{
					sub_14082FA40(a1, v11);
					v17 = *v5;
					v18 = (_QWORD*)*v5;
					if (v5 == *(_QWORD**)(a1 + 144))
						*(_QWORD*)(a1 + 144) = v17;
					else
						*v6 = v17;
					if (v5 == *(_QWORD**)(a1 + 152))
						*(_QWORD*)(a1 + 152) = v6;
					*v5 = *(_QWORD*)(a1 + 160);
					--* (_DWORD*)(a1 + 176);
					*(_QWORD*)(a1 + 160) = v5;
					v5 = v18;
				}
				else
				{
					v6 = v5;
					*(_DWORD*)(v11 + 64) = v16 - 1;
					v5 = (_QWORD*)*v5;
				}
				goto LABEL_28;
			}
		LABEL_18:
			v6 = v5;
			v5 = (_QWORD*)*v5;
		LABEL_28:
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
			if (!v5)
			{
				v7 = a4;
				break;
			}
		}
	}
	sub_14082E8F0(a1, a2, a3, v7, a5);
}

