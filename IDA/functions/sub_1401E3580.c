//----- (00000001401E3580) ----------------------------------------------------
int* __fastcall sub_1401E3580(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	int* v4; // rdi
	int* v5; // rbx
	int* result; // rax
	__int64** v10; // rdi
	__int64* i; // rbx
	__int64 v12; // r8
	int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64* v16; // rax
	int* v17; // r8
	int* v18; // rdx
	__int64 v19; // [rsp+20h] [rbp-38h] BYREF
	int v20; // [rsp+68h] [rbp+10h] BYREF
	__int64 v21; // [rsp+78h] [rbp+20h] BYREF

	v4 = (int*)a2[2];
	v5 = (int*)a2[1];
	result = sub_1407DB590(v5, v4, 0i64);
	a2[2] += -4 * (v4 - v5);
	v10 = *(__int64***)(a4 + 8);
	for (i = *v10; i != (__int64*)v10; i = (__int64*)*i)
	{
		v12 = *(_QWORD*)(a3 + 8);
		v13 = *((_DWORD*)i + 4);
		v14 = *(_QWORD*)(v12 + 8);
		v15 = v12;
		while (v14)
		{
			if (*(_DWORD*)(v14 + 32) < v13)
			{
				v14 = *(_QWORD*)(v14 + 24);
			}
			else
			{
				v15 = v14;
				v14 = *(_QWORD*)(v14 + 16);
			}
		}
		if (v15 == v12 || v13 < *(_DWORD*)(v15 + 32))
		{
			v19 = *(_QWORD*)(a3 + 8);
			v16 = &v19;
		}
		else
		{
			v21 = v15;
			v16 = &v21;
		}
		result = (int*)*v16;
		if (result == (int*)v12 || *((_DWORD*)i + 7) != 1)
		{
			v18 = (int*)a2[2];
			v20 = 0;
			if (v18 == (int*)a2[3])
			{
				v17 = &v20;
			LABEL_32:
				result = sub_1401E4420(a2, v18, v17);
			}
			else
			{
				if (v18)
					*v18 = 0;
				a2[2] += 4i64;
			}
		}
		else
		{
			switch (*((_DWORD*)i + 6))
			{
			case 0:
				v17 = result + 16;
				goto LABEL_15;
			case 1:
				v17 = result + 17;
				goto LABEL_15;
			case 2:
				v17 = result + 18;
				goto LABEL_15;
			case 3:
				v17 = result + 21;
				goto LABEL_15;
			case 4:
				v17 = result + 20;
				goto LABEL_15;
			case 5:
				v17 = result + 22;
				goto LABEL_15;
			case 6:
				v17 = result + 24;
				goto LABEL_15;
			case 7:
				v17 = result + 25;
				goto LABEL_15;
			case 8:
				v17 = result + 26;
			LABEL_15:
				v18 = (int*)a2[2];
				if (v18 == (int*)a2[3])
					goto LABEL_32;
				if (v18)
				{
					result = (int*)(unsigned int)*v17;
					*v18 = (int)result;
				}
				a2[2] += 4i64;
				break;
			default:
				continue;
			}
		}
	}
	return result;
}

