#include "../winhttp.h"

//----- (00000001402B7ED0) ----------------------------------------------------
__int64 __fastcall sub_1402B7ED0(unsigned int* a1, _QWORD* a2, __int64* a3)
{
	unsigned int v4; // ebx
	int v7; // eax
	__int64 v8; // rdx
	struct IStreamVtbl* lpVtbl; // rax
	LPSTREAM ppstm; // [rsp+30h] [rbp-98h] BYREF
	int v12; // [rsp+38h] [rbp-90h] BYREF
	__int64 v13; // [rsp+40h] [rbp-88h]
	char v14[16]; // [rsp+50h] [rbp-78h] BYREF
	unsigned int v15; // [rsp+60h] [rbp-68h]
	int v16; // [rsp+64h] [rbp-64h]

	v4 = 0;
	if (*a3)
	{
		sub_14018B900(*a3, 0);
		*a3 = 0i64;
	}
	a3[1] = 0i64;
	ppstm = 0i64;
	v7 = CreateStreamOnHGlobal(0i64, 1, &ppstm);
	if (v7 >= 0)
	{
		v7 = sub_1402B7950(a1, v8, a2, (__int64)ppstm);
		if (v7 >= 0)
		{
			v7 = ((__int64(__fastcall*)(LPSTREAM, char*, __int64))ppstm->lpVtbl->Stat)(ppstm, v14, 1i64);
			if (v7 >= 0)
			{
				if (v16)
				{
					v7 = -2147024673;
				}
				else
				{
					v7 = sub_1402B2750(a3, v15);
					if (v7 >= 0)
					{
						lpVtbl = ppstm->lpVtbl;
						v13 = 0i64;
						v7 = ((__int64(__fastcall*)(LPSTREAM, _QWORD, _QWORD, _QWORD))lpVtbl->Seek)(ppstm, 0i64, 0i64, 0i64);
						if (v7 >= 0)
						{
							v7 = ((__int64(__fastcall*)(LPSTREAM, __int64, _QWORD, int*))ppstm->lpVtbl->Read)(
								ppstm,
								*a3,
								*((unsigned int*)a3 + 2),
								&v12);
							if (v7 >= 0)
							{
								if (v12 == a3[1])
									goto LABEL_14;
								v7 = -2147467259;
							}
						}
					}
				}
			}
		}
	}
	v4 = v7;
LABEL_14:
	if (ppstm)
		((void(__fastcall*)(LPSTREAM))ppstm->lpVtbl->Release)(ppstm);
	return v4;
}
// 1402B7F3C: variable 'v8' is possibly undefined
// 1402B7ED0: using guessed type char var_78[16];

