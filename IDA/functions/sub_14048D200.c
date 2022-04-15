//----- (000000014048D200) ----------------------------------------------------
_QWORD* __fastcall sub_14048D200(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // r8
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rax
	char v13[40]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF
	__int64 v15; // [rsp+58h] [rbp+10h] BYREF
	__int64 v16; // [rsp+60h] [rbp+18h] BYREF

	sub_140008410(a1 + 72);
	result = *(_QWORD**)(a1 + 48);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = *(_QWORD*)(a1 + 16);
			v5 = *(_DWORD*)v3[5];
			v6 = *(_QWORD*)(v4 + 8);
			v7 = v4;
			while (v6)
			{
				if (*(_DWORD*)(v6 + 32) < v5)
				{
					v6 = *(_QWORD*)(v6 + 24);
				}
				else
				{
					v7 = v6;
					v6 = *(_QWORD*)(v6 + 16);
				}
			}
			if (v7 == v4 || v5 < *(_DWORD*)(v7 + 32))
			{
				v16 = *(_QWORD*)(a1 + 16);
				v8 = &v16;
			}
			else
			{
				v15 = v7;
				v8 = &v15;
			}
			v9 = *v8;
			if (v9 != v4)
			{
				v10 = *(_QWORD*)(v9 + 40);
				if (v10)
				{
					v11 = *(_DWORD*)(v10 + 56);
					HIDWORD(v14) = *(_DWORD*)(v10 + 20);
					LODWORD(v14) = v11;
					sub_140032F50(a1 + 72, (__int64)v13, &v14);
				}
			}
			v12 = v3[3];
			if (v12)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v12 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 48));
	}
	return result;
}
// 14048D200: using guessed type char var_28[40];

