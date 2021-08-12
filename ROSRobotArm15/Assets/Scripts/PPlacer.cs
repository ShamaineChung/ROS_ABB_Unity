using PathCreation;
using UnityEngine;

namespace PathCreation.Examples
{

    [ExecuteInEditMode]
    public class PPlacer : MonoBehaviour
    {
        public PathCreator pathCreator;
        public GameObject prefab;
        public GameObject holder;
        public float spacing = 3;
        const float minSpacing = .1f;

        public void setTrigger(bool currentState)
        {
            holder.SetActive(currentState);
            Generate();
                
        }

        public void Generate()
        {
            if (pathCreator != null && prefab != null && holder != null)
            {
                DestroyObjects();

                VertexPath path = pathCreator.path;

                //spacing = Mathf.Max(minSpacing, spacing);
                float dst = 0;

                while (dst < path.length)
                {
                    Vector3 point = path.GetPointAtDistance(dst);
                    Quaternion rot = path.GetRotationAtDistance(dst);
                    Instantiate(prefab, point, rot, holder.transform);
                    dst += spacing;
                }
            }
        }

        void DestroyObjects()
        {
            int numChildren = holder.transform.childCount;
            for (int i = numChildren - 1; i >= 0; i--)
            {
                DestroyImmediate(holder.transform.GetChild(i).gameObject, false);
            }
        }
       
    }
}