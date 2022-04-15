#include "../winhttp.h"

//----- (0000000140841A40) ----------------------------------------------------
__int64 __fastcall sub_140841A40(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // ebx
	int* v7; // rax
	__int64 v8; // r14
	int v10; // ebp
	int v11; // r12d
	__int64 v12; // rax
	unsigned __int8** v13; // rdi
	unsigned __int8** v14; // rax
	unsigned __int8*** v15; // rcx

	v6 = 1;
	v7 = sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v8 = (__int64)v7;
	if (!v7)
		return 2i64;
	v10 = *((unsigned __int16*)v7 + 2);
	v11 = *v7;
	v12 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 6368), *v7);
	v13 = (unsigned __int8**)v12;
	if (v12)
	{
		if (v10 != 1027 || (*(_BYTE*)(v12 + 62) & 0x20) != 0)
		{
		LABEL_13:
			v15 = *(unsigned __int8****)(a3 + 96);
			if ((unsigned int)(((__int64)v15 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
			{
				*(_QWORD*)(a3 + 96) = v15 + 1;
				if (v15)
					*v15 = v13;
			}
			goto LABEL_16;
		}
		EnterCriticalSection(&stru_140C61BB8);
		v6 = sub_140855E70(v13, v8, *(_DWORD*)(a2 + 1));
		if (v6 != 1)
			LABEL_11:
		(*((void(__fastcall**)(unsigned __int8**)) * v13 + 2))(v13);
	}
	else
	{
		EnterCriticalSection(&stru_140C61BB8);
		v14 = (unsigned __int8**)sub_1408557D0(v10, v11);
		v13 = v14;
		if (!v14)
		{
			v6 = 2;
			goto LABEL_12;
		}
		v6 = sub_140855E70(v14, v8, *(_DWORD*)(a2 + 1));
		if (v6 != 1)
			goto LABEL_11;
	}
LABEL_12:
	LeaveCriticalSection(&stru_140C61BB8);
	if (v6 == 1)
		goto LABEL_13;
LABEL_16:
	sub_14083C740(a1);
	return v6;
}

